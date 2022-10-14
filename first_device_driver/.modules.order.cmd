cmd_/home/msr/LDD/first_device_driver/modules.order := {   echo /home/msr/LDD/first_device_driver/first_device_driver.ko; :; } | awk '!x[$$0]++' - > /home/msr/LDD/first_device_driver/modules.order
