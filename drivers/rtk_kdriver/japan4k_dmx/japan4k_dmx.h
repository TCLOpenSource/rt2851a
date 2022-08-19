#ifndef __JAPAN4K_DMX_H__
#define __JAPAN4K_DMX_H__

#ifdef __cplusplus
extern "C" {
#endif

#define JAPAN4K_DMX_DBG_EN

#define TLV_RELEASE_DATA(tlv_len) \
        p_rp = p_rp + tlv_len; \
        len  = len - tlv_len;

#define TLV_MAX_SIZE  65536

//#pragma pack(1)

struct japan4k_dmx_callback {
        void (*callback)(void* p_ctx, unsigned char* p_data, unsigned int len);
};

struct japan4k_dmx {
        unsigned char   tlv_buffer[TLV_MAX_SIZE];
        unsigned long   tlv_buff_zize;
        unsigned int    tlv_excepted_zize;
        unsigned char   tp_id;

        unsigned char   *rhal_tlv_buffer;
        unsigned long   rhal_tlv_buffer_size;
        unsigned long   rhal_tlv_buffer_max_size;

        struct japan4k_dmx_callback cb;            // dmx callback
};

///////////////////////////////////////////////////////
struct japan4k_dmx* create_japan4k_dmx(struct japan4k_dmx_callback* cb);
void destroy_japan4k_dmx(struct japan4k_dmx* dmx);
#if 0
int japan4k_file_ring_read_data(unsigned char** pp_rp, UINT32* p_len);
int japan4k_file_ring_release_data(unsigned char* p_rp, UINT32 len);
int japan4k_file_ring_get_free_space(unsigned char** pp_wp, unsigned long* p_len);
int japan4k_file_ring_put_data(unsigned char* p_wp, unsigned long len);
#endif
int japan4k_dmx_run(struct japan4k_dmx* p_this);

///////////////////////////////////////////////////////

#ifdef JAPAN4K_DMX_DBG_EN
//windows
//#define JAPAN4K_DMX_TRACE()
//#define JAPAN4K_DMX_DBG(fmt, ...)        printf("[JAPAN4K_DMX] Dbg,  " fmt, __VA_ARGS__)
//#define JAPAN4K_DMX_INFO(fmt, ...)       printf("[JAPAN4K_DMX] Info, " fmt, __VA_ARGS__)
//#define JAPAN4K_DMX_WARN(fmt, ...)       printf("[JAPAN4K_DMX] Warn, " fmt, __VA_ARGS__)
//#define JAPAN4K_DMX_ERROR(fmt, args...)  printf("[JAPAN4K_DMX] Err,  " fmt, __VA_ARGS__)

// linux
//#define JAPAN4K_DMX_TRACE()              printk(KERN_INFO "[JAPAN4K_DMX][TRACE] %s:%d:%s\n", __FILE__, __LINE__, __FUNCTION__)
//#define JAPAN4K_DMX_DBG(fmt, args...)    printk(KERN_ERR "[JAPAN4K_DMX] Warn, " fmt, ## args)
#define JAPAN4K_DMX_TRACE()
#define JAPAN4K_DMX_DBG(fmt, args...)
#define JAPAN4K_DMX_INFO(fmt, args...)     printk(KERN_ERR  "[JAPAN4K_DMX] Info, " fmt, ## args)
#define JAPAN4K_DMX_WARN(fmt, args...)     printk(KERN_ERR  "[JAPAN4K_DMX] Dbg, " fmt, ## args)
#define JAPAN4K_DMX_ERROR(fmt, args...)    printk(KERN_EMERG "[JAPAN4K_DMX] Err, " fmt, ## args)

#else
#define JAPAN4K_DMX_TRACE()
#define JAPAN4K_DMX_DBG(fmt, ...)
#define JAPAN4K_DMX_INFO(fmt, ...)
#define JAPAN4K_DMX_WARN(fmt, ...)
#endif

#ifdef __cplusplus
}
#endif

#endif
