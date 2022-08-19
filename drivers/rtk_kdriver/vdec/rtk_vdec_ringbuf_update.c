#include "rtk_vdec_ringbuf_update.h"

#include <linux/uaccess.h>
#include <rpc_common.h>
#include <linux/delay.h>

static inline unsigned long _RINGBUF_GetSpace(unsigned long r, unsigned long w,
					      unsigned long size)
{
	/*
   *  0  1  2  3  4  5  6  7
   * [-][-][-][w][-][r][-][-]     space = 1 = 5 - 3 - 1
   *
   *  0  1  2  3  4  5  6  7
   * [-][r][-][w][-][-][-][-]     space = 5 = 1 + size - 3 - 1
   *
   *  0  1  2   3   4  5  6  7   (EMPTY)
   * [-][-][-][w/r][-][-][-][-]   space = size - 1 = 3 + size - e - 1
   * */
	return r > w ? (r - w - 1) : (r + size - w - 1);
}

#if 0
static inline unsigned long _RINGBUF_GetDataSize(unsigned long r,
                                                 unsigned long w,
                                                 unsigned long size)
{
  /*
   *  0  1  2  3  4  5  6  7
   * [-][r][-][w][-][-][-][-]     data = 3 - 1 = 2
   *
   *  0  1  2  3  4  5  6  7
   * [-][-][-][w][-][r][-][-]     data = size -r + w = 8 - 5 + 3 = 6
   *
   *  0  1  2   3   4  5  6  7   (EMPTY)
   * [-][-][-][w/r][-][-][-][-]   data = w - r = 0
   * */
  return w >= r ? (w - r) : (w + size - r);
}
#endif

long rtk_vdec_dmabuf_ringbuf_start_update(
	void *headerAddr, unsigned long length,
	struct rtk_vdec_dmabuf_ringbuf_map *map, unsigned long baseaddr,
	unsigned long basesize)
{
	RINGBUFFER_HEADER *header;
	long ret = -EFAULT;
	unsigned long bufBaseAddr, bufReadAddr, bufWriteAddr;
	unsigned long bufSize, writeOffset, bufAtomicSize;
	unsigned long space;
	int retry = 0;
	if (!headerAddr || !map) {
		pr_err("[rtk_vdec_ringbuf_update:%d] Invalid Arguments\n",
		       __LINE__);
		goto err;
	}

	header = (RINGBUFFER_HEADER *)headerAddr;
	bufBaseAddr = htonl(header->beginAddr);
	bufReadAddr = htonl(header->readPtr[0]);
	bufWriteAddr = htonl(header->reserve3);
	bufSize = htonl(header->size);
	if (bufBaseAddr != baseaddr) {
		pr_err("[rtk_vdec_ringbuf_update:%d] Get wrong bufBaseAddr\n",
		       __LINE__);
		goto err;
	}

	if (bufSize != basesize) {
		pr_err("[rtk_vdec_ringbuf_update:%d] Get wrong bufSize\n",
		       __LINE__);
		goto err;
	}

	space = _RINGBUF_GetSpace(bufReadAddr, bufWriteAddr, bufSize);
	while (space < length) {
		msleep(10);
		bufReadAddr = htonl(header->readPtr[0]);
		bufWriteAddr = htonl(header->reserve3);
		space = _RINGBUF_GetSpace(bufReadAddr, bufWriteAddr, bufSize);
		retry++;
		if (retry % 100 == 0) {
			pr_info("lock cpb: buffer full, r/r3=0x%lx/0x%lx, space=%lu,\
                    retry=%d",
				bufReadAddr, bufWriteAddr, space, retry);
		}
		if (retry >= 3000) {
			pr_info("lock cpb: timeout");
			goto err;
		}
	}

	if (bufWriteAddr >= bufBaseAddr + bufSize) {
		bufWriteAddr -= bufSize;
	}

	writeOffset = bufWriteAddr - bufBaseAddr;
	bufAtomicSize = bufBaseAddr + bufSize - bufWriteAddr;

	map->buffer_addr = bufBaseAddr;
	map->buffer_size = bufSize;

	// check wrap around
	if (length >= bufAtomicSize) {
		map->offset1 = writeOffset;
		map->length1 = bufAtomicSize;
		map->offset2 = 0;
		map->length2 = length - bufAtomicSize;
	} else {
		map->offset1 = writeOffset;
		map->length1 = length;
		map->offset2 = 0;
		map->length2 = 0;
	}

	return 0;
err:
	return ret;
}

long rtk_vdec_dmabuf_ringbuf_commit_update(void *headerAddr,
					   unsigned long length,
					   unsigned long baseaddr,
					   unsigned long basesize)
{
	RINGBUFFER_HEADER *header;
	long ret = -EFAULT;
	unsigned long bufBaseAddr, bufReadAddr, bufWriteAddr;
	unsigned long bufSize, bufAtomicSize, bufNextWrite;
	unsigned long space;
	if (!headerAddr) {
		pr_err("[rtk_vdec_ringbuf_update:%d] Invalid Arguments\n",
		       __LINE__);
		goto err;
	}

	header = (RINGBUFFER_HEADER *)headerAddr;
	bufBaseAddr = htonl(header->beginAddr);
	bufReadAddr = htonl(header->readPtr[0]);
	bufWriteAddr = htonl(header->reserve3);
	bufSize = htonl(header->size);
	if (bufBaseAddr != baseaddr) {
		pr_err("[rtk_vdec_ringbuf_update:%d] Get wrong bufBaseAddr\n",
		       __LINE__);
		goto err;
	}

	if (bufSize != basesize) {
		pr_err("[rtk_vdec_ringbuf_update:%d] Get wrong bufSize\n",
		       __LINE__);
		goto err;
	}

	space = _RINGBUF_GetSpace(bufReadAddr, bufWriteAddr, bufSize);
	if (space < length) {
		pr_err("[rtk_vdec_dmabuf:%d] Ring buffer full\n", __LINE__);
		goto err;
	}

	bufAtomicSize = bufBaseAddr + bufSize - bufWriteAddr;
	bufNextWrite = bufWriteAddr;

	// check wrap around
	if (length >= bufAtomicSize)
		bufNextWrite = bufBaseAddr + length - bufAtomicSize;
	else
		bufNextWrite += length;

	header->reserve3 = htonl(bufNextWrite);

	return 0;
err:
	return ret;
}