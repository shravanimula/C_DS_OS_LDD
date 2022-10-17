#include<linux/module.h>
#include<linux/fs.h>
#include<asm/uaccess.h>
#include<linux/init.h>
#include<linux/cdev.h>
#include<linux/slab.h>

#define MAJORNO 300
#define MINORNO 0
#define CHAR_DEV_NAME "my_cdev"
#define MAX_LENGTH 4000
#define SUCCESS 0

struct cdev *my_cdev;
dev_t mydev;
int count=1,inuse=0;

static int __init char_dev_init(void)
{
	mydev=MKDEV(MAJORNO,MINORNO);
	register_chrdev_region(mydev,count,CHAR_DEV_NAME);
	printk(KERN_INFO "\n Device Registere %s\n", CHAR_DEV_NAME);
	return 0;
}

static void __exit char_dev_exit(void)
{
	//cdev_del(my_cdev);
	//unregister_chrdev_region(mydev,1);
	printk(KERN_INFO "\n Driver unregister \n");
}

module_init(char_dev_init);
module_exit(char_dev_exit);

MODULE_AUTHOR("shravani");
MODULE_DESCRIPTION("static character device driver");
MODULE_LICENSE("GPL");
