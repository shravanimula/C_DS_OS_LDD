cmd_/home/msr/LDD/char_drv_statics/modules.order := {   echo /home/msr/LDD/char_drv_statics/char_drv_static.ko; :; } | awk '!x[$$0]++' - > /home/msr/LDD/char_drv_statics/modules.order
