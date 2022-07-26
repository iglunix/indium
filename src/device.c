#include "mtl_private.h"
#include <stdlib.h>


char const *mtl_device_name(mtl_device *self) {
	return self->props.deviceName;
}

mtl_device *mtl_create_system_default_device() {
	mtl_device *ret = malloc(sizeof(mtl_device));

	vkCreateInstance(&(VkInstanceCreateInfo) {
		.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
	}, NULL, &ret->instance);

	uint32_t n = 1;
	vkEnumeratePhysicalDevices(ret->instance, &n, &ret->pdevice);

	vkGetPhysicalDeviceProperties(ret->pdevice, &ret->props);

	return ret;
}

mtl_command_queue *mtl_device_create_command_queue() {
	assert(!"TODO");
}
