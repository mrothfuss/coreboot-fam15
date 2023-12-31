# Run an intermediate step when producing coreboot.rom
# that adds additional components to the final firmware
# image outside of CBFS
#INTERMEDIATE += exynos5250_add_bl1

bootblock-y += pinmux.c
# Clock is required for UART
bootblock-$(CONFIG_EARLY_CONSOLE) += clock_init.c
bootblock-$(CONFIG_EARLY_CONSOLE) += clock.c
bootblock-$(CONFIG_EARLY_CONSOLE) += soc.c
bootblock-$(CONFIG_EARLY_CONSOLE) += uart.c
bootblock-y += exynos_cache.c

romstage-y += clock.c
romstage-y += clock_init.c
romstage-y += pinmux.c  # required by s3c24x0_i2c (exynos5-common) and uart.
romstage-y += exynos_cache.c
romstage-y += dmc_common.c
romstage-y += dmc_init_ddr3.c
romstage-$(CONFIG_EARLY_CONSOLE) += soc.c
romstage-$(CONFIG_EARLY_CONSOLE) += uart.c

#ramstage-y += tzpc_init.c
ramstage-y += clock.c
ramstage-y += clock_init.c
ramstage-y += exynos_cache.c
ramstage-y += pinmux.c
ramstage-y += power.c
ramstage-y += soc.c
ramstage-$(CONFIG_CONSOLE_SERIAL_UART) += uart.c
ramstage-y += cpu.c
ramstage-y += exynos_cache.c

#ramstage-$(CONFIG_SATA_AHCI) += sata.c

exynos5250_add_bl1: $(obj)/coreboot.pre
	printf "    DD         Adding Samsung Exynos5250 BL1\n"
	dd if=3rdparty/cpu/samsung/exynos5250/E5250.nbl1.bin \
		of=$(obj)/coreboot.pre conv=notrunc >/dev/null 2>&1
