cmd_/home/msr/LDD/module_param/modules.order := {   echo /home/msr/LDD/module_param/module_param1.ko; :; } | awk '!x[$$0]++' - > /home/msr/LDD/module_param/modules.order
