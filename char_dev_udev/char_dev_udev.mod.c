#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0x37a0cba, "kfree" },
	{ 0x8eab5523, "class_destroy" },
	{ 0x37fd21cc, "device_destroy" },
	{ 0x8bd65ff4, "kmem_cache_alloc_trace" },
	{ 0xc83492ef, "kmalloc_caches" },
	{ 0x85401a17, "device_create" },
	{ 0x109c449a, "__class_create" },
	{ 0xe1d71654, "cdev_del" },
	{ 0x4c75eeab, "cdev_add" },
	{ 0xc3a1cc09, "cdev_init" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa9e91d2d, "cdev_alloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x12dee77, "module_refcount" },
	{ 0x52673010, "current_task" },
	{ 0x92997ed8, "_printk" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5F024D2437E5A20C86E9F7A");
