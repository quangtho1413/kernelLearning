
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

static int __init hello_world_init(void)
{
    printk(KERN_INFO "This is sample code for linux driver programming");
    printk(KERN_INFO "Loaded hello world kernel successful");
    return 0;
}

void __exit hello_world_exit(void)
{
    printk(KERN_INFO "Exit hello world kernel");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("quangtho1413@gmail.com");
MODULE_DESCRIPTION("This is sample code for linux driver programming");
MODULE_VERSION("2:1:0");
