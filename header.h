#ifndef __HEADER
#define __HEADER

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/usb.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ankit Rawat");
MODULE_DESCRIPTION("My USB Driver");
MODULE_VERSION("0.1");

#ifndef DEBUG
#define DEBUG
#endif

//extern static struct usb_device_id pen_table[]; 
//extern static struct usb_driver pen_drive;
int pen_probe(struct usb_interface *interface, const struct usb_device_id *id);
void pen_disconnect(struct usb_interface *interface);

#endif
