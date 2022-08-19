###################################################################
# Setup Include Path
###################################################################
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/include/
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/include/
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/IPC/generate/include/system
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/IPC/include
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/include/rtk_kdriver
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/gal
ifeq ($(CONFIG_RTK_8KCODEC),y)
KBUILD_CPPFLAGS += -Idrivers/rtk_codec
endif

KBUILD_CPPFLAGS += -DLITTLE_ENDIAN
KBUILD_CFLAGS += -fno-unsigned-char

###################################################################
# Must have
###################################################################
obj-$(CONFIG_RTK_KDRIVER_SUPPORT) += crt/

###################################################################
# Generic drivers
###################################################################
#PCBMGR
obj-$(CONFIG_REALTEK_PCBMGR) += pcbmgr/

# RPC
ifeq ($(CONFIG_ARM64),y)
obj-$(CONFIG_RTK_KDRV_RPC) += RPC64/
else
obj-$(CONFIG_RTK_KDRV_RPC) += RPC/
endif
# AVCPU
obj-$(CONFIG_RTK_KDRV_AVCPU) += rtk_avcpu.o

# rtk_semaphore
obj-$(CONFIG_RTK_SEMAPHORE) += rtk_semaphore.o
obj-$(CONFIG_RTK_SEMAPHORE_TEST) += rtk_semaphore_test.o

# AMP init driver
# Please notice that this is only for REALTEK_AMP_TAS5711 & REALTEK_AMP_ACL1310
# If use different IC, please change this.
obj-$(CONFIG_RTK_KDRV_AMP) += amp/

# EMCU
obj-$(CONFIG_RTK_KDRV_EMCU) += rtk_emcu.o
obj-$(CONFIG_RTK_KDRV_EMCU) += emcu/

# RTD LOGBUF
obj-$(CONFIG_REALTEK_LOGBUF) += rtd_logger.o

# HW-MONITOR
obj-y += hw_monitor/

# SB2
obj-$(CONFIG_RTK_KDRV_SB2) += rtk_busto.o

#DBG HELP
obj-$(CONFIG_RTK_ONLINE_HELP) += rtk_online_help.o

obj-y += platform/
# GPIO
obj-$(CONFIG_RTK_KDRV_GPIO) += gpio/

obj-$(CONFIG_RTK_KDRV_LEDS) += leds/
#obj-$(CONFIG_RTK_KDRV_GPIO) += lnbgpio/

# SWITCH
obj-$(CONFIG_RTK_KDRV_SWITCH) += switch/

# PWM
obj-$(CONFIG_RTK_KDRV_PWM) += pwm/
# PCMCIA
obj-$(CONFIG_RTK_KDRV_PCMCIA) += pcmcia/rtk_pcmcia.o

# SMARTCARD
obj-$(CONFIG_RTK_KDRV_SMARTCARD) += smartcard/

# CEC
obj-$(CONFIG_RTK_KDRV_CEC) += cec/

# DDC
obj-$(CONFIG_RTK_KDRV_DDC) += ddc/
# CP
obj-$(CONFIG_RTK_KDRV_MCP) += mcp/

# CW
obj-$(CONFIG_RTK_KDRV_CW) += cw/

# OTP
obj-$(CONFIG_RTK_KDRV_OTP) += otp/

# RNG
obj-$(CONFIG_RTK_KDRV_RNG) += rng/

# DV
obj-$(CONFIG_RTK_KDRV_DV) += dolby_idk_1_6_1_1/

#USBDUMP
obj-$(CONFIG_RTK_USBDUMP_ENABLE) += rtk_usbdump.o

# MD
obj-$(CONFIG_RTK_KDRV_MD) += md/

# RTC
obj-$(CONFIG_RTK_KDRV_RTC) += rtk_rtc.o

# Watch Dog
obj-$(CONFIG_RTK_KDRV_WATCHDOG) += rtk_watchdog.o

# Thermal Sensor
obj-$(CONFIG_RTK_KDRV_THERMAL_SENSOR) += thermal/

# power/battery simulator
obj-$(CONFIG_RTK_POWER) += power/

# CPU Freq
obj-$(CONFIG_RTK_KDRV_CPU_FREQUENCY) += rtk_clock.o
obj-$(CONFIG_CPU_FREQ) += rtk_cpufreq.o

# QoS
obj-$(CONFIG_RTK_KDRV_QOS_CONTROL) += rtk_qos.o

# HW Watchpoint
obj-$(CONFIG_RTK_KDRV_WATCHPOINT) += rtk_venus_watch.o

# Frame Buffer
obj-$(CONFIG_RTK_KDRV_VENUS_FB) += rtk_venusfb.o

# LSADC
obj-$(CONFIG_RTK_KDRV_LSADC) += lsadc/


# Keypad Driver
obj-$(CONFIG_RTK_KDRV_KEYPAD) += keypad/


# UART
obj-$(CONFIG_RTK_KDRV_SERIAL_8250) += uart/

# RTICE Driver
obj-$(CONFIG_RTK_KDRV_RTICE) += rtice/

# IRDA Driver
obj-$(CONFIG_RTK_KDRV_IR) += ir/

# VGIP ISR Driver
obj-$(CONFIG_SUPPORT_SCALER) += rtk_vgip_isr.o
obj-$(CONFIG_SUPPORT_SCALER) += vgip_isr/

# DDOMAIN ISR Driver
obj-$(CONFIG_SUPPORT_SCALER) += rtk_ddomain_isr.o


# MEMC ISR Driver
obj-$(CONFIG_HW_SUPPORT_MEMC) += rtk_memc_isr.o
obj-$(CONFIG_HW_SUPPORT_MEMC) += memc_isr/

# SCALER
obj-$(CONFIG_SUPPORT_SCALER) += tvscalercontrol/

# HDMI RX
obj-$(CONFIG_RTK_HDMI_RX) += tvscalercontrol/hdmirx/

# LG BOARD
obj-$(CONFIG_RTK_KDRV_LG_BOARD) += rtk_lg_board.o

# MISC DRIVER INTERRUPT CONTROL CENTER
obj-$(CONFIG_RTK_KDRV_MISC_INTERRUPT) += rtk_misc_interrupt.o

# LNB Uart patch
#obj-$(CONFIG_RTK_KDRV_LNB_UART) += lnbuart/

# Pinmux Driver
obj-$(CONFIG_RTK_KDRV_PINMUX) += rtk_pinmux.o

# GAL Driver
obj-$(CONFIG_RTK_KDRV_SE) += gal/
obj-$(CONFIG_RTK_KDRV_GDMA) += gal/
obj-$(CONFIG_CUSTOMER_TV006) += gal/

# Misc Driver
obj-$(CONFIG_RTK_KDRV_MISC_DEV) += misc.o

# MMC
obj-$(CONFIG_MMC_RTKEMMC_PLUS) += mmc/

# I2C Driver
obj-$(CONFIG_RTK_KDRV_I2C) += i2c/

# Audio HW Driver
obj-$(CONFIG_RTK_KDRV_AUDIO_HW) += audio_hw/

# ETN Driver
obj-$(CONFIG_RTK_KDRV_R8168) += rtk_8168.o


# DDR DM scan
obj-$(CONFIG_RTK_DDR_SCAN) += rtk_scan.o

# USB host controller
obj-$(CONFIG_RTK_KDRV_USB) += usb/

###################################################################
# DTV Related drivers
###################################################################

#DEMOD Kernel driver
obj-$(CONFIG_RTK_KDRV_DEMOD) += demod/
obj-$(CONFIG_RTK_KDRV_KHAL_DEMOD) += demod/

#TP Kernel driver
obj-$(CONFIG_RTK_KDRV_TP) += tp/

#ATSC3 DMX
obj-$(CONFIG_RTK_KDRV_ATSC3_DMX) += atsc3_dmx/

#ATSC3_ALP DMX
obj-$(CONFIG_RTK_KDRV_ATSC3_DMX) += atsc3_alp_dmx/
###################################################################
# HAL Related drivers
###################################################################

# CRM
obj-$(CONFIG_RTK_KDRV_CRM) += crm/

# OMX
obj-$(CONFIG_RTK_KDRV_OMX) += omx/

# Demux HAL Driver
ifeq (y,$(filter y, $(CONFIG_CUSTOMER_TV006)))
obj-$(CONFIG_RTK_KDRV_DEMUX) += demux/
else
obj-$(CONFIG_RTK_KDRV_DEMUX) += demux_tv001/
endif

obj-$(CONFIG_RTK_KDRV_AUDIO) += audio/
obj-$(CONFIG_RTK_KDRV_VDEC) += vdec/

obj-$(CONFIG_RTK_KDRV_TEEPROXY) += teeproxy/

# SPI
obj-$(CONFIG_RTK_KDRV_SPI) += spi/

obj-$(CONFIG_RTK_AI_DRV) += rtkAiDrv/
#obj-y += rtkAiDrv/
KBUILD_CFLAGS += -Werror

obj-y += mac6p_ip_power_down/
