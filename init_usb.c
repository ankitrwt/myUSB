#include "header.h"
#include "variables.h"


struct usb_device_id pen_table[] = 
{
	{USB_DEVICE(0x0781,0x5567)},
	{}
};

struct usb_driver pen_drive = 
{
	name : "my_usb_driver",
	id_table : pen_table,
	probe : pen_probe,
	disconnect : pen_disconnect,
};

MODULE_DEVICE_TABLE(usb,pen_table);

static int __init initialize(void)
{
int ret = -1;

	#ifdef DEBUG
	printk(KERN_INFO "BEGIN: %s\n",__func__);
	#endif

	ret = usb_register(&pen_drive);
	printk(KERN_INFO "USB_Registered\n");

	#ifdef DEBUG
	printk(KERN_INFO "END: %s\n",__func__);
	#endif
return 0;
}


module_init(initialize);
