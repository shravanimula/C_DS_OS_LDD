#include<linux/module.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("GPL V2");
MODULE_LICENSE("Dual BSD/GPL");

MODULE_AUTHOR("shravani");
MODULE_DESCRIPTION("A sample driver");
MODULE_VERSION("1.0.0");

static int __init hello_world_init(void)
{
	printk(KERN_INFO "hello this is my first");
	return 0;
}
module_init(hello_world_init);

void __exit hello_world_exit(void)
{
	printk(KERN_INFO "Exiting my programming");
}
module_exit(hello_world_exit);
