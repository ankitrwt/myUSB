#include "header.h"
#include "variables.h"

static void __exit finish(void)
{
	#ifdef DEBUG
	printk(KERN_INFO "BEGIN: %s\n",__func__);
	#endif


	usb_deregister(&pen_drive);
	printk(KERN_INFO "Unregistered USB\n");
	
	#ifdef DEBUG
	printk(KERN_INFO "END: %s\n",__func__);
	#endif
}

module_exit(finish);
