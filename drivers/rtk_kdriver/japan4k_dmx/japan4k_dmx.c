#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include "japan4k_dmx.h"
#include <linux/kthread.h>
#include <linux/pageremap.h>

#include <rbus/tp_reg.h>
#include <tp/tp_dbg.h>
#include <tp/tp_drv_global.h>
#include <tp/tp_reg_ctrl.h>
#include "tlv_lib.h"
#include <linux/freezer.h>
#include <asm/cacheflush.h>
#include <linux/delay.h>
#include <rbus/timer_reg.h>
#include <rbus/pll_reg_reg.h>

#include <linux/uaccess.h>

#define japan4k_dmx_malloc(size)        kmalloc(size, GFP_KERNEL)
#define japan4k_dmx_free(addr)          kfree(addr)

extern struct file *rec_tlv_fd1;
extern struct  file *rec_oif_fd;

#define TP_BUFFER_MASS_DATA     0
#define TP_BUFFER_SECTION       1
#define TP_BUFFER_INFO_PACK     2
#define TP_BUFFER_CI            3

/*======================================================
 * Func  : japan4k_dmx_run
 *
 * Desc  :
 *
 * Param : handle of japan4k dmx
 *
 * Retn  : 0 : successed, oethers failed
 *======================================================*/
int japan4k_dmx_run(struct japan4k_dmx* p_this)
{
#if 0
        unsigned char *p_rp, *p_rp_ori;
        UINT32        tlv_buffer_max_size, tlv_buffer_now_size;
        UINT32        len, len_ori;

        JAPAN4K_DMX_TRACE();

        while (japan4k_file_ring_read_data(&p_rp, &len) == 0 && len) {
                p_rp_ori = p_rp;
                len_ori  = len;
                while(len > 0) {

                        TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
                        if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                                break;

                        JAPAN4K_DMX_DBG("read data from ring (%p) = { %02x.%02x.%02x.%02x....%02x.%02x.%02x.%02x }\n",
                                        p_rp,
                                        p_rp[0], p_rp[1], p_rp[2], p_rp[3],
                                        p_rp[len - 4], p_rp[len - 3], p_rp[len - 2], p_rp[len - 1]);

                        if (p_this->tlv_excepted_zize == 0) {
                                // fid header header....
                                unsigned char* p_tlv;
                                unsigned int   data_len;

                                p_tlv = tlv_find_starter(p_rp, len, 0);

                                if (p_tlv == NULL) {
                                        TLV_RELEASE_DATA(len);
                                        JAPAN4K_DMX_ERROR("tlv re-sync 1 can not find sync byte p_rp=%p len=%d\n", p_rp, len);
                                        continue;
                                }

                                if (p_tlv > p_rp) {
                                        // release spare data...
                                        data_len = (unsigned int)(p_tlv - p_rp);
                                        TLV_RELEASE_DATA(data_len);
                                        JAPAN4K_DMX_ERROR("tlv re-sync 2 p_rp=%p len=%d data_len=%d\n", p_rp, len, data_len);
                                }

                                if (len < TLV_HDR_SIZE) { // data less than 4 bytes
                                        p_this->tlv_excepted_zize = TLV_HDR_SIZE;
                                        p_this->tlv_buff_zize     = len;            // minimum size...
                                        memcpy(p_this->tlv_buffer, p_rp, len);      // store temp buffer
                                        TLV_RELEASE_DATA(len);
                                        continue;
                                } else {
                                        // a complete packet header
                                        p_this->tlv_excepted_zize = TLV_HDR_SIZE + (p_rp[2] << 8) + (p_rp[3]);

                                        if(p_this->tlv_excepted_zize > TLV_MAX_SIZE) {
                                                JAPAN4K_DMX_ERROR("TLV data length is too big %d p_rp=%p len=%d\n", p_this->tlv_excepted_zize, p_rp, len);
                                                p_this->tlv_excepted_zize = 0;
                                                p_this->tlv_buff_zize = 0;
                                                TLV_RELEASE_DATA(1);
                                                continue;
                                        }

                                        if (len >= p_this->tlv_excepted_zize) {
                                                JAPAN4K_DMX_DBG("complete data block, just deliver it\n");
                                                // a complete data block : dispatch data directly
                                                if(p_rp[1] != 0xff) {
                                                        p_this->cb.callback(p_this, p_rp, p_this->tlv_excepted_zize);
                                                }
                                                TLV_RELEASE_DATA(p_this->tlv_excepted_zize);
                                                p_this->tlv_excepted_zize = 0;
                                                p_this->tlv_buff_zize = 0;
                                                continue;
                                        } else {
                                                // part of block... : store it in the internal buffer
                                                memcpy(p_this->tlv_buffer, p_rp, len);
                                                p_this->tlv_buff_zize = len;
                                                TLV_RELEASE_DATA(len);

                                                JAPAN4K_DMX_DBG("part of data block, collect it, buff_size=%u, excepted size=%u\n",
                                                                p_this->tlv_buff_zize, p_this->tlv_excepted_zize);
                                                continue;
                                        }
                                }
                        } else if (p_this->tlv_excepted_zize == TLV_HDR_SIZE) {
                                // collecting header....
                                int data_len = TLV_HDR_SIZE - p_this->tlv_buff_zize;

                                JAPAN4K_DMX_DBG("collect data header, len = %u, buff_size=%u, excepted size=%u\n",
                                                len, p_this->tlv_buff_zize, p_this->tlv_excepted_zize);

                                if (data_len > len)
                                        data_len = len;

                                memcpy(p_this->tlv_buffer + p_this->tlv_buff_zize, p_rp, data_len);
                                p_this->tlv_buff_zize += data_len;
                                TLV_RELEASE_DATA(data_len);

                                if (p_this->tlv_buff_zize == p_this->tlv_excepted_zize) {
                                        // parse header
                                        p_this->tlv_excepted_zize += (p_this->tlv_buffer[2] << 8) + (p_this->tlv_buffer[3]);

                                        if(p_this->tlv_excepted_zize > TLV_MAX_SIZE) {
                                                JAPAN4K_DMX_ERROR("TLV data length is too big %d p_rp=%p data_len=%d\n", p_this->tlv_excepted_zize, p_rp, data_len);
                                                p_this->tlv_excepted_zize = 0;
                                                p_this->tlv_buff_zize = 0;
                                        }
                                        if(p_this->tlv_excepted_zize == TLV_HDR_SIZE) {
                                                p_this->tlv_excepted_zize = 0;
                                                p_this->tlv_buff_zize = 0;
                                        }
                                        continue;
                                }
                        } else {
                                // collecting data
                                int data_len = p_this->tlv_excepted_zize - p_this->tlv_buff_zize;       // remain size
                                JAPAN4K_DMX_DBG("collect data block, len = %u, buff_size=%u, excepted size=%u\n",
                                                len, p_this->tlv_buff_zize, p_this->tlv_excepted_zize);


                                if (data_len > len)
                                        data_len = len;

                                memcpy(p_this->tlv_buffer + p_this->tlv_buff_zize, p_rp, data_len);
                                TLV_RELEASE_DATA(data_len);

                                p_this->tlv_buff_zize += data_len;

                                if (p_this->tlv_buff_zize >= p_this->tlv_excepted_zize) {
                                        // complete block
                                        if(p_this->tlv_buffer[1] != 0xff)
                                                p_this->cb.callback(p_this, p_this->tlv_buffer, p_this->tlv_excepted_zize);
                                        p_this->tlv_excepted_zize = 0;
                                        p_this->tlv_buff_zize = 0;
                                }
                        }
                }
                japan4k_file_ring_release_data(p_rp_ori, len_ori - len);
                TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
                //printk("[%d] %ld %ld\n", p_this->tp_id, tlv_buffer_max_size, tlv_buffer_now_size);
                if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                        break;
        }

        return 0;
#else
        unsigned long length_temp, i, tlv_packet_cnt;
        unsigned long flag_temp, data0_temp, data1_temp, wp_temp, rp_temp, buffer_flag_temp,dbg_cnt_temp;
        unsigned char *pData;
        UINT32        tlv_buffer_max_size, tlv_buffer_now_size;

        JAPAN4K_DMX_TRACE();
    
        while(READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg) != READ_REG32(TP_TLV_DESCRIPTOR_READ_reg))
        {
                TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
                if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                        break;

                wp_temp = READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg);
                rp_temp = READ_REG32(TP_TLV_DESCRIPTOR_READ_reg);
        
                WRITE_REG32( TP_TLV_DESCRIPTOR_reg, 0x00001000| (rp_temp&0x7f) );
        
                while(0) {
                        unsigned long temp;
                        temp = READ_REG32(TP_TLV_DESCRIPTOR_reg);
                        if(temp == 0x0)
                                break;
                        JAPAN4K_DMX_WARN(".\n");
                }
            
                flag_temp    = READ_REG32(TP_TLV_DESCRIPTOR_FLAG_reg);
                data0_temp   = READ_REG32(TP_TLV_DESCRIPTOR_DATA0_reg);
                data1_temp   = READ_REG32(TP_TLV_DESCRIPTOR_DATA1_reg);
                dbg_cnt_temp = READ_REG32(TP_TLV_DESCRIPTOR_PKT_NUM_reg);
                buffer_flag_temp = READ_REG32(TP_TLV_BUFFER_FLAG_reg);
                pData        = (char*)((data0_temp - pTp_drv->tp_japan[p_this->tp_id].mass_buffer.BasePhy) + pTp_drv->tp_japan[p_this->tp_id].mass_buffer.BaseVir);
            
                dmac_flush_range( pData, pData + SIZE_PER_TLV_BUFFER);
                outer_flush_range((UADDRESS)data0_temp, (UADDRESS)data0_temp + SIZE_PER_TLV_BUFFER);
                length_temp = data1_temp & 0x1FFFF;
            
                //printk(KERN_DEBUG"%lx c=%3ld l=0x%4lx w=0x%3lx r=0x%3lx f=0x%6lx bf=0x%2lx    [%02X %02X %02X %02X %02X %02X %02X %02X] %02X %02X %02X %02X %02X %02X\n", data0_temp, (data1_temp & 0x01FE0000)>>17, data1_temp & 0x1FFFF, wp_temp, rp_temp, flag_temp, buffer_flag_temp, pData[0], pData[1], pData[2], pData[3], pData[4], pData[5], pData[6], pData[7], pData[8], pData[9], pData[10], pData[11], pData[12], pData[13]);
                if(rec_oif_fd != NULL) {
                        mm_segment_t old_fs;
                        old_fs = get_fs();
                        set_fs(KERNEL_DS);
                        vfs_write(rec_oif_fd, pData, SIZE_PER_TLV_BUFFER, &rec_oif_fd->f_pos);
                        set_fs(old_fs);
                }
        
                i = 0;
                tlv_packet_cnt = 0;
                while(i < length_temp) {
                        unsigned long tlv_size;
                        unsigned long long timestamp;
            
                        if(pData[i + TLV_STUFF_DATA_SIZE] != TLV_SYNC_BYTE) {
                                JAPAN4K_DMX_ERROR("ERROR!! Data is not sync byte [%02X %02X %02X %02X %02X %02X %02X %02X] %02X %02X %02X %02X %02X %02X\n", pData[i+0], pData[i+1], pData[i+2], pData[i+3], pData[i+4], pData[i+5], pData[i+6], pData[i+7], pData[i+8], pData[i+9], pData[i+10], pData[i+11], pData[i+12], pData[i+13]);
                                JAPAN4K_DMX_ERROR("wp=0x%x(%d) rp=0x%x(%d) i=%ld length_temp=%ld\n", READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg), READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg), READ_REG32(TP_TLV_DESCRIPTOR_READ_reg), READ_REG32(TP_TLV_DESCRIPTOR_READ_reg), i, length_temp);
                                break;
                        }
                        tlv_size = ((pData[i + TLV_STUFF_DATA_SIZE + 2]<<8)&0xff00) + pData[i + TLV_STUFF_DATA_SIZE + 3];
        
                        if(pData[i + TLV_STUFF_DATA_SIZE + 1] != 0xff) {
                                timestamp = ((unsigned long long)pData[i+0]<<56) + ((unsigned long long)pData[i+1]<<48) + ((unsigned long long)pData[i+2]<<40) + ((unsigned long long)pData[i+3]<<32) + ((unsigned long long)pData[i+4]<<24) + ((unsigned long long)pData[i+5]<<16) + ((unsigned long long)pData[i+6]<<8) + (unsigned long long)pData[i+7];
                                p_this->cb.callback(p_this, &pData[i + TLV_STUFF_DATA_SIZE], tlv_size + 4);
                        }
        
                        i = i + TLV_STUFF_DATA_SIZE + 4 + tlv_size;
                        tlv_packet_cnt++;
                }
                //printk(KERN_DEBUG"tlv_packet_cnt = %ld\n", tlv_packet_cnt);
        
                //memset(pData, 0x00, SIZE_PER_TLV_BUFFER);
                //dmac_flush_range( pData, pData + SIZE_PER_TLV_BUFFER);
                //outer_flush_range((UADDRESS)data0_temp, (UADDRESS)data0_temp + SIZE_PER_TLV_BUFFER);
        
                WRITE_REG32(TP_TLV_DESCRIPTOR_DATA1_reg , 0x00000000 );
                WRITE_REG32( TP_TLV_DESCRIPTOR_reg      , 0x00001100| (rp_temp&0x7f) );
        
                while(0) {
                        UINT32 temp;
                        temp = READ_REG32(TP_TLV_DESCRIPTOR_reg);
                        if(temp == 0x0)
                                break;
                        JAPAN4K_DMX_WARN(".\n");
                }
        
                if( (READ_REG32(TP_TLV_DESCRIPTOR_FLAG_reg)&0x10000) != 0x00)  {
                        wp_temp = READ_REG32(TP_TLV_DESCRIPTOR_WRITE_reg);
                        rp_temp = READ_REG32(TP_TLV_DESCRIPTOR_READ_reg);
                        JAPAN4K_DMX_ERROR("full wp=0x%lx rp=0x%lx\n", wp_temp, rp_temp);
                }
        
                rp_temp++;
                if( (rp_temp&0xff)==0x00000080 ) {
                        rp_temp = ~rp_temp;
                        rp_temp = rp_temp & 0x00000100;
                }
                WRITE_REG32(TP_TLV_DESCRIPTOR_READ_reg, rp_temp);

                TP_Get_TLVBufferInformation(p_this->tp_id, &tlv_buffer_max_size, &tlv_buffer_now_size);
                //printk("[%d] %ld %ld\n", p_this->tp_id, tlv_buffer_max_size, tlv_buffer_now_size);
                if( (tlv_buffer_max_size - tlv_buffer_now_size) <= 64 * 1024 )
                        break;
        }
        return 0;
#endif
}

/*======================================================
 * Func  : create_japan4k_dmx
 *
 * Desc  : create a japan4k demux
 *
 * Param : p_dmx_in : input buffer
 *
 * Retn  : handle of japan4k dmx
 *======================================================*/
struct japan4k_dmx* create_japan4k_dmx(
        struct japan4k_dmx_callback*  p_cb
)
{
        struct japan4k_dmx* p_this;

        JAPAN4K_DMX_TRACE();

        p_this = (struct japan4k_dmx*) japan4k_dmx_malloc(sizeof(struct japan4k_dmx));

        if (p_this) {
                memset(p_this, 0, sizeof(struct japan4k_dmx));
                p_this->cb = *p_cb;
        }

        return p_this;
}

/*======================================================
 * Func  : destroy_japan4k_dmx
 *
 * Desc  :
 *
 * Param : handle of japan4k dmx
 *
 * Retn  : N/A
 *======================================================*/
void destroy_japan4k_dmx(struct japan4k_dmx* p_this)
{
        JAPAN4K_DMX_TRACE();
        if (p_this)
                japan4k_dmx_free(p_this);
}

#if 0
/*======================================================
 * Func  : japan4k_file_ring_read_data
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_read_data(
        unsigned char**         pp_rp,
        UINT32*                 p_len
)
{
        int result;
        result = TP_ReadData_NoNeedAligment(TP_TP2, pp_rp, p_len, 1024, TP_BUFFER_MASS_DATA);
        *pp_rp = Tp_Buf_Phy_to_Vir(TP_TP2, TP_BUFFER_MASS_DATA, (unsigned char*)*pp_rp);
        if(result < 0) {
                *p_len = 0;
        }
        return 0;
}


/*======================================================
 * Func  : japan4k_file_ring_release_data
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_release_data(
        unsigned char*          p_rp,
        UINT32                  len
)
{
        if(rec_tlv_fd1 != NULL) {
                mm_segment_t old_fs;
                old_fs = get_fs();
                set_fs(KERNEL_DS);
                vfs_write(rec_tlv_fd1, p_rp, len, &rec_tlv_fd1->f_pos);
                set_fs(old_fs);
        }

        p_rp = Tp_Buf_Vir_to_Phy(TP_TP2, TP_BUFFER_MASS_DATA, (unsigned char*)p_rp);

        TP_ReleaseData_NoNeedAligment(TP_TP2, p_rp, len, TP_BUFFER_MASS_DATA);
        return 0;
}

/*======================================================
 * Func  : japan4k_file_ring_get_free_space
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_get_free_space(
        unsigned char**         pp_wp,
        unsigned long*          p_len
)
{
        return 0;
}

/*======================================================
 * Func  : japan4k_file_ring_put_data
 *
 * Desc  :
 *
 * Param :
 *
 * Retn  : N/A
 *======================================================*/
int japan4k_file_ring_put_data(
        unsigned char*          p_wp,
        unsigned long           len
)
{
        return 0;
}
#endif
