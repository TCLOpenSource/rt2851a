# SPDX-License-Identifier: GPL-2.0
dts-dirs	+= brcm
dts-dirs	+= cavium-octeon
dts-dirs	+= img
dts-dirs	+= ingenic
dts-dirs	+= lantiq
dts-dirs	+= mti
dts-dirs	+= netlogic
dts-dirs	+= ni
dts-dirs	+= pic32
dts-dirs	+= qca
dts-dirs	+= ralink
dts-dirs	+= xilfpga
ifneq ($(wildcard formosa/bsp/dts/Makefile),)
dts-dirs	+= ../../bsp/dts
endif

obj-y		:= $(addsuffix /, $(dts-dirs))

dtstree		:= $(srctree)/$(src)
dtb-$(CONFIG_OF_ALL_DTBS) := $(patsubst $(dtstree)/%.dts,%.dtb, $(foreach d,$(dts-dirs), $(wildcard $(dtstree)/$(d)/*.dts)))

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb *.dtb.S
