# SPDX-License-Identifier: GPL-2.0+
#
# Copyright (C) 2012 Samsung Electronics
# Lukasz Majewski <l.majewski@samsung.com>

obj-$(CONFIG_$(SPL_TPL_)DM_PMIC) += pmic-uclass.o
obj-$(CONFIG_$(SPL_)DM_PMIC_FAN53555) += fan53555.o
obj-$(CONFIG_$(SPL_)DM_PMIC_DA9063) += da9063.o
obj-$(CONFIG_$(SPL_)DM_PMIC_MAX77663) += max77663.o
obj-$(CONFIG_DM_PMIC_MAX77686) += max77686.o
obj-$(CONFIG_DM_PMIC_MAX8998) += max8998.o
obj-$(CONFIG_DM_PMIC_MC34708) += mc34708.o
obj-$(CONFIG_$(SPL_)DM_PMIC_BD71837) += bd71837.o
obj-$(CONFIG_$(SPL_)DM_PMIC_MP5416) += mp5416.o
obj-$(CONFIG_$(SPL_)DM_PMIC_PFUZE100) += pfuze100.o
obj-$(CONFIG_$(SPL_)DM_PMIC_PCA9450) += pca9450.o
obj-$(CONFIG_$(SPL_)DM_PMIC_PF9453) += pf9453.o
obj-$(CONFIG_$(SPL_)DM_PMIC_PF0900) += pf0900.o
obj-$(CONFIG_$(SPL_)DM_PMIC_PF5300) += pf5300.o
obj-$(CONFIG_PMIC_S2MPS11) += s2mps11.o
obj-$(CONFIG_DM_PMIC_SANDBOX) += sandbox.o i2c_pmic_emul.o
obj-$(CONFIG_PMIC_AB8500) += ab8500.o
obj-$(CONFIG_PMIC_ACT8846) += act8846.o
obj-$(CONFIG_PMIC_AS3722) += as3722.o as3722_gpio.o
obj-$(CONFIG_$(SPL_)PMIC_AXP) += axp.o
obj-$(CONFIG_PMIC_MAX8997) += max8997.o
obj-$(CONFIG_PMIC_QCOM) += pmic_qcom.o
obj-$(CONFIG_$(SPL_TPL_)PMIC_RK8XX) += rk8xx.o
obj-$(CONFIG_$(SPL_)PMIC_RN5T567) += rn5t567.o
obj-$(CONFIG_PMIC_TPS65090) += tps65090.o
obj-$(CONFIG_PMIC_S5M8767) += s5m8767.o
obj-$(CONFIG_DM_PMIC_TPS65910) += pmic_tps65910_dm.o
obj-$(CONFIG_$(SPL_)DM_PMIC_TPS80031) += tps80031.o
obj-$(CONFIG_$(SPL_)PMIC_PALMAS) += palmas.o
obj-$(CONFIG_$(SPL_)PMIC_LP873X) += lp873x.o
obj-$(CONFIG_$(SPL_)PMIC_LP87565) += lp87565.o
obj-$(CONFIG_PMIC_STPMIC1) += stpmic1.o
obj-$(CONFIG_PMIC_TPS65217) += pmic_tps65217.o
obj-$(CONFIG_PMIC_TPS65219) += tps65219.o
obj-$(CONFIG_PMIC_TPS65941) += tps65941.o
obj-$(CONFIG_PMIC_RAA215300) += raa215300.o
obj-$(CONFIG_POWER_TPS65218) += pmic_tps65218.o

ifeq ($(CONFIG_$(SPL_)POWER_LEGACY),y)
obj-$(CONFIG_POWER_LTC3676) += pmic_ltc3676.o
obj-$(CONFIG_POWER_BD71837) += pmic_bd71837.o
obj-$(CONFIG_POWER_PCA9450) += pmic_pca9450.o
obj-$(CONFIG_POWER_PFUZE100) += pmic_pfuze100.o
obj-$(CONFIG_POWER_PFUZE3000) += pmic_pfuze3000.o
obj-$(CONFIG_POWER_HI6553) += pmic_hi6553.o
obj-$(CONFIG_POWER_MC34VR500) += pmic_mc34vr500.o
endif

obj-$(CONFIG_$(SPL_)POWER_TPS62362) += pmic_tps62362.o
obj-$(CONFIG_SPL_POWER_TPS65910) += pmic_tps65910.o
