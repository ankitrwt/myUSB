#include "header.h"
#include "variables.h"

void pen_disconnect(struct usb_interface *interface)
{
	#ifdef DEBUG
	printk(KERN_INFO "BEGIN: %s\n",__func__);
	#endif

	printk(KERN_INFO "Pen Drive Removed\n");

	#ifdef DEBUG
	printk(KERN_INFO "END: %s\n",__func__);
	#endif
}
