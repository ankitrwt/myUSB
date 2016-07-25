#include "header.h"
#include "variables.h"

int pen_probe(struct usb_interface *interface, const struct usb_device_id *id)
{
	#ifdef DEBUG
	printk(KERN_INFO "BEGIN: %s\n",__func__);
	#endif

	printk(KERN_INFO " PENDRIVE VENDOR: %04X PRODUCT: %04X\n",id->idVendor,id->idProduct);

	#ifdef DEBUG
	printk(KERN_INFO "END: %s\n",__func__);
	#endif
return 0;
}
