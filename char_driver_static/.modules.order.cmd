cmd_/home/msr/LDD/char_driver_static/modules.order := {   echo /home/msr/LDD/char_driver_static/char_drv_static.ko; :; } | awk '!x[$$0]++' - > /home/msr/LDD/char_driver_static/modules.order
