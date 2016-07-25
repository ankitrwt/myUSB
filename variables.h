#ifndef __VAR
#define __VAR

extern struct usb_device_id pen_table[]; 
extern struct usb_driver pen_drive;
extern int pen_probe(struct usb_interface *interface, const struct usb_device_id *id);
extern void pen_disconnect(struct usb_interface *interface);

//MODULE_DEVICE_TABLE(usb,pen_table);
/*
static struct usb_device_id pen_table[] = 
{
	{USB_DEVICE(0x0781:0x5567)},
}

static struct usb_driver pen_drive = 
{
	.name = "my_usb_driver",
	.id_table = pen_table,
	.probe = pen_probe,
	.disconnect = pen_disconnect,
};


MODULE_DEVICE_TABLE(usb,pen_table);
*/
#endif
