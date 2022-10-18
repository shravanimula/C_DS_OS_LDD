cmd_/home/msr/LDD/char_dev_udev/modules.order := {   echo /home/msr/LDD/char_dev_udev/char_dev_udev.ko; :; } | awk '!x[$$0]++' - > /home/msr/LDD/char_dev_udev/modules.order
