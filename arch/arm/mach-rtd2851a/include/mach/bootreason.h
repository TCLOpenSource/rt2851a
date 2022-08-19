#ifndef _BOOT_REASON_H_
#define _BOOT_REASON_H_

#define BOOTREASON_PRI_mask     (0x000000FF)
#define BOOTREASON_SUB_mask     (0x0000FF00)
#define BOOTREASON_REG          STB_SW_DATA12_reg  //0xB806016C

 enum eBootreason{
     BREASON_COLD_BOOT,
     BREASON_WARM_BOOT,
     BREASON_WATCHDOG,
     BREASON_RECOVERY,
     BREASON_KERNEL_PANIC,
     BREASON_REBOOT,
     BREASON_SHUTDOWN,
     BREASON_RTC_WAKEUP
 };

void rtk_write_boot_reason(enum eBootreason pri_reason);

#endif
