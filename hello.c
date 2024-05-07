#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Raghav 4 GNU/Linux");
MODULE_DESCRIPTION("A hello world Linux kernal module");

static int init hello_start(void)
{
	printk ("Hello, I'm here to help\n");
	return 0;
}

static void exit hello_end(void)
{
	printk("Goodbye, I hope I was helpful\n");
}
module_init(hello_start);
module_exit(hello_end);

