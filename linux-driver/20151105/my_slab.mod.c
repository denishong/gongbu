#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9452278, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa42ee0e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x66569a0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa05e4e7f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xc3385fa9, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfc1c1dcc, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x784d443c, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

