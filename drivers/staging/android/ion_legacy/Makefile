obj-$(CONFIG_ION) +=	ion.o ion_heap.o ion_page_pool.o ion_system_heap.o \
			ion_carveout_heap.o ion_chunk_heap.o ion_cma_heap.o ion_dvr_heap.o
obj-$(CONFIG_ION_TEST) += ion_test.o
ifdef CONFIG_COMPAT
obj-$(CONFIG_ION) += compat_ion.o
endif

obj-$(CONFIG_ION_DUMMY) += ion_dummy_driver.o
obj-$(CONFIG_ION_REALTEK) += realtek/
obj-$(CONFIG_ION_TEGRA) += tegra/
obj-$(CONFIG_ION_LG1K) += lg1k/
KBUILD_CFLAGS += -Werror
