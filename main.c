#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");

static int petlkm_init(void)
{
    printk(KERN_INFO "%s: In init\n",__FUNCTION__);
    return 0;
}

static void petlkm_exit(void)
{
    printk(KERN_INFO "%s: In exit\n",__FUNCTION__);
}

module_init(petlkm_init);
module_exit(petlkm_exit);