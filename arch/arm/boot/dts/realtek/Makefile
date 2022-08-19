# SPDX-License-Identifier: GPL-2.0
# RTK_patch: add our machine dts
ifeq ($(CONFIG_ANDROID_VERSION),10)
ifeq ($(CONFIG_RTK_IS_HARDWARE_RTD2851A),y)
rtkdtb-$(CONFIG_ARCH_RTK2851A) += rtd2851a_Q
else
rtkdtb-$(CONFIG_ARCH_RTK2851A) += rtd2841a_Q
endif
else ifeq ($(CONFIG_ANDROID_VERSION),11)
ifeq ($(CONFIG_RTK_IS_HARDWARE_RTD2851A),y)
rtkdtb-$(CONFIG_ARCH_RTK2851A) += rtd2851a_R
else
rtkdtb-$(CONFIG_ARCH_RTK2851A) += rtd2841a_R
endif
else
rtkdtb-$(CONFIG_ARCH_RTK2851A) += rtd2851a
endif

targets += dtbs dtbs_install
dt_path := ./arch/arm/boot/dts/realtek
dtc_path := $(dt_path)/dtc
dts_path := $(dt_path)/dts
dts_o_path := $(dt_path)/dts_o
out_path := $(dt_path)/out

# RTK_patch: add target dtb_compile
dtb_compile:
	$(Q)rm -f $(out_path)/*.dtb
	$(Q)cp $(srctree)/scripts/dtc/dtc $(dtc_path)/dtc_linux
	$(Q)cpp -o $(out_path)/$(rtkdtb-y).tmp -nostdinc -I $(srctree)/include -undef -x assembler-with-cpp $(dts_path)/$(rtkdtb-y).dts
ifeq ($(CONFIG_ANDROID_TV),y)
	$(Q)$(dtc_path)/dtc_android -a 4 -@ -qq -i $(dts_path) -I dts -O dtb -o $(out_path)/$(rtkdtb-y).dtb $(out_path)/$(rtkdtb-y).tmp
else
	$(Q)$(dtc_path)/dtc_linux -a 4 -qq -i $(dts_path) -I dts -O dtb -o $(out_path)/$(rtkdtb-y).dtb $(out_path)/$(rtkdtb-y).tmp
	$(Q)cp $(out_path)/$(rtkdtb-y).dtb embedded.dtb
endif
	$(Q)rm $(out_path)/*.tmp
	
clean-files	:= $(out_path)/*.dtb
