#include <linux/bootmem.h>
#include <linux/kasan.h>
#include <linux/kernel.h>
#include <linux/memblock.h>
#include <linux/start_kernel.h>

#include <linux/init_task.h>
#include <asm/cputype.h>
#include <asm/highmem.h>
#include <asm/mach/map.h>
#include <asm/memory.h>
#include <asm/page.h>
#include <asm/pgalloc.h>
#include <asm/pgtable.h>
#include <asm/procinfo.h>
#include <asm/proc-fns.h>
#include <asm/tlbflush.h>
#include <asm/cp15.h>

#include "mm.h"

static pgd_t tmp_page_table[PTRS_PER_PGD] __initdata __aligned(1ULL << 14);

pmd_t tmp_pmd_table[PTRS_PER_PMD] __page_aligned_bss;

static __init void *kasan_alloc_block(size_t size, int node)
{
        void *ptr;
#ifdef CONFIG_NO_BOOTMEM
        ptr = __va(memblock_alloc_nid(size, size, node));
#else
        ptr = alloc_bootmem_low_pages_node(NODE_DATA(node), size);
#endif
        memset(ptr, 0, size);
        return ptr;
}

static void __init kasan_early_pmd_populate(unsigned long start, unsigned long end, pud_t *pud)
{
	unsigned long addr;
	unsigned long next;
	pmd_t *pmd;

	pmd = pmd_offset(pud, start);
	for (addr = start; addr < end;) {
		pmd_populate_kernel(&init_mm, pmd, kasan_early_shadow_pte);
		next = pmd_addr_end(addr, end);
		addr = next;
		flush_pmd_entry(pmd);
		pmd++;
	}
}

static void __init kasan_early_pud_populate(unsigned long start, unsigned long end, pgd_t *pgd)
{
	unsigned long addr;
	unsigned long next;
	pud_t *pud;

	pud = pud_offset(pgd, start);
	for (addr = start; addr < end;) {
		next = pud_addr_end(addr, end);
		kasan_early_pmd_populate(addr, next, pud);
		addr = next;
		pud++;
	}
}

void __init kasan_map_early_shadow(pgd_t *pgdp)
{
	int i;
	unsigned long start = KASAN_SHADOW_START;
	unsigned long end = KASAN_SHADOW_END;
	unsigned long addr;
	unsigned long next;
	pgd_t *pgd;

	for (i = 0; i < PTRS_PER_PTE; i++)
		set_pte_at(&init_mm, KASAN_SHADOW_START + i*PAGE_SIZE,
			&kasan_early_shadow_pte[i], pfn_pte(
				virt_to_pfn(kasan_early_shadow_page),
				__pgprot(_L_PTE_DEFAULT | L_PTE_DIRTY | L_PTE_XN)));

	pgd = pgd_offset_k(start);
	for (addr = start; addr < end;) {
		next = pgd_addr_end(addr, end);
		kasan_early_pud_populate(addr, next, pgd);
		addr = next;
		pgd++;
	}
}

extern struct proc_info_list *lookup_processor_type(unsigned int);

void __init kasan_early_init(void)
{
	struct proc_info_list *list;

	/*
	 * locate processor in the list of supported processor
	 * types.  The linker builds this table for us from the
	 * entries in arch/arm/mm/proc-*.S
	 */
	list = lookup_processor_type(read_cpuid_id());
	if (list) {
#ifdef MULTI_CPU
		processor = *list->proc;
#endif
	}

	kasan_map_early_shadow(swapper_pg_dir);
	dmac_inv_range(KASAN_SHADOW_START, KASAN_SHADOW_END);
	start_kernel();
}

static void __init clear_pgds(unsigned long start,
			unsigned long end)
{
	for (; start && start < end; start += PMD_SIZE)
		pmd_clear(pmd_off_k(start));
}
unsigned int kasan_max_pfn = 0, kasan_min_pfn = 0;
pte_t * __meminit kasan_pte_populate(pmd_t *pmd, unsigned long addr, int node)
{
	pte_t *pte = pte_offset_kernel(pmd, addr);
	unsigned long pfn = 0;
	if (pte_none(*pte)) {
		pte_t entry;
		void *p = kasan_alloc_block(PAGE_SIZE, node);
		if (!p)
			return NULL;
		pfn = virt_to_pfn(p);
		entry = pfn_pte(pfn, __pgprot(_L_PTE_DEFAULT | L_PTE_DIRTY | L_PTE_XN));
		if(kasan_max_pfn == 0)
			kasan_max_pfn = pfn;
		if(kasan_min_pfn == 0)
			kasan_min_pfn = pfn;
		if(pfn > kasan_max_pfn)
			kasan_max_pfn = pfn;
		if(pfn < kasan_min_pfn)
			kasan_min_pfn = pfn;
		set_pte_at(&init_mm, addr, pte, entry);
	}
	return pte;
}

pmd_t * __meminit kasan_pmd_populate(pud_t *pud, unsigned long addr, int node)
{
	pmd_t *pmd = pmd_offset(pud, addr);
	unsigned long pfn = 0;
	if (pmd_none(*pmd)) {
		void *p = kasan_alloc_block(PAGE_SIZE, node);
		if (!p)
			return NULL;
		pfn = virt_to_pfn(p);
		if(kasan_max_pfn == 0)
			kasan_max_pfn = pfn;
		if(kasan_min_pfn == 0)
			kasan_min_pfn = pfn;
		if(pfn > kasan_max_pfn)
			kasan_max_pfn = pfn;
		if(pfn < kasan_min_pfn)
			kasan_min_pfn = pfn;
		pmd_populate_kernel(&init_mm, pmd, p);
	}
	return pmd;
}

pud_t * __meminit kasan_pud_populate(pgd_t *pgd, unsigned long addr, int node)
{
	pud_t *pud = pud_offset(pgd, addr);
	unsigned long pfn = 0;
	if (pud_none(*pud)) {
		void *p = kasan_alloc_block(PAGE_SIZE, node);
		if (!p)
			return NULL;
		pfn = virt_to_pfn(p);
		if(kasan_max_pfn == 0)
			kasan_max_pfn = pfn;
		if(kasan_min_pfn == 0)
			kasan_min_pfn = pfn;
		if(pfn > kasan_max_pfn)
			kasan_max_pfn = pfn;
		if(pfn < kasan_min_pfn)
			kasan_min_pfn = pfn;
		pr_err("populating pud addr %lx\n", addr);
		pud_populate(&init_mm, pud, p);
	}
	return pud;
}

pgd_t * __meminit kasan_pgd_populate(unsigned long addr, int node)
{
	pgd_t *pgd = pgd_offset_k(addr);
	unsigned long pfn = 0;
	if (pgd_none(*pgd)) {
		void *p = kasan_alloc_block(PAGE_SIZE, node);
		if (!p)
			return NULL;
		pfn = virt_to_pfn(p);
		if(kasan_max_pfn == 0)
			kasan_max_pfn = pfn;
		if(kasan_min_pfn == 0)
			kasan_min_pfn = pfn;
		if(pfn > kasan_max_pfn)
			kasan_max_pfn = pfn;
		if(pfn < kasan_min_pfn)
			kasan_min_pfn = pfn;
		pgd_populate(&init_mm, pgd, p);
	}
	return pgd;
}

static int __init create_mapping(unsigned long start, unsigned long end, int node)
{
	unsigned long addr = start;
	pgd_t *pgd;
	pud_t *pud;
	pmd_t *pmd;
	pte_t *pte;
	pr_info("populating shadow for %lx, %lx\n", start, end);
	for (; addr < end; addr += PAGE_SIZE) {
		pgd = kasan_pgd_populate(addr, node);
		if (!pgd)
			return -ENOMEM;

		pud = kasan_pud_populate(pgd, addr, node);
		if (!pud)
			return -ENOMEM;

		pmd = kasan_pmd_populate(pud, addr, node);
		if (!pmd)
			return -ENOMEM;

		pte = kasan_pte_populate(pmd, addr, node);
		if (!pte)
			return -ENOMEM;
	}
	return 0;
}


void __init kasan_init(void)
{
	struct memblock_region *reg;
	u64 orig_ttbr0;
	unsigned long start = KASAN_SHADOW_START;
	unsigned long end = KASAN_SHADOW_END;


#ifdef CONFIG_ARM_LPAE
	memcpy(tmp_pmd_table, pgd_page_vaddr(*pgd_offset_k(KASAN_SHADOW_START)), sizeof(tmp_pmd_table));
	memcpy(tmp_page_table, swapper_pg_dir, sizeof(tmp_page_table));
	set_pgd(&tmp_page_table[pgd_index(KASAN_SHADOW_START)], __pgd(__pa(tmp_pmd_table) | PMD_TYPE_TABLE | L_PGD_SWAPPER));
#else
	memcpy(tmp_page_table, swapper_pg_dir, sizeof(tmp_page_table));
#endif
	cpu_switch_mm(tmp_page_table, &init_mm);

	clear_pgds(KASAN_SHADOW_START, KASAN_SHADOW_END);

	kasan_populate_early_shadow(
		kasan_mem_to_shadow((void *)KASAN_SHADOW_START),
		kasan_mem_to_shadow((void *)KASAN_SHADOW_END));

	kasan_populate_early_shadow(
		kasan_mem_to_shadow((void *)PKMAP_BASE),
		kasan_mem_to_shadow((void *)PKMAP_BASE + PMD_SIZE));

	kasan_populate_early_shadow(kasan_mem_to_shadow((void *)VMALLOC_START),
				kasan_mem_to_shadow((void *)KASAN_MONITOR_VA_UPBOUND));
	for_each_memblock(memory, reg) {
		void *start = __va(reg->base);
		void *end = __va(reg->base + reg->size);

		if (reg->base + reg->size > arm_lowmem_limit)
			end = __va(arm_lowmem_limit);
		if (start >= end)
			break;

		create_mapping((unsigned long)kasan_mem_to_shadow(start),
			(unsigned long)kasan_mem_to_shadow(end),
			NUMA_NO_NODE);
	}

        create_mapping((unsigned long)kasan_mem_to_shadow((void *)MODULES_VADDR),
                       (unsigned long)kasan_mem_to_shadow((void *)MODULES_END),
                       NUMA_NO_NODE);

	memset(kasan_early_shadow_page, 0, PAGE_SIZE);
	flush_cache_all();
	local_flush_bp_all();
	local_flush_tlb_all();
	cpu_switch_mm(swapper_pg_dir, &init_mm);
	pr_emerg("Kernel address sanitizer initialized max %x min %x\n", kasan_max_pfn, kasan_min_pfn);
	pr_emerg("KASAN: SHADOW_START - SHADOW_END 0x%x - 0x%x (%03d MB), offset=%x\n", start, end, (end - start) / (1024*1024), KASAN_SHADOW_OFFSET);
	pr_emerg("KASAN: VMALLOC_START 0x%px MODULES_VADDR 0x%px TASK_SIZE 0x%px TASK_UNMAPPED_BASE 0x%px\n", (void*)VMALLOC_START, (void*)MODULES_VADDR, (void*)TASK_SIZE, (void*)TASK_UNMAPPED_BASE);
	init_task.kasan_depth = 0;
}
