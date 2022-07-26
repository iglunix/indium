#include <vulkan/vulkan.h>
#include <metal.h>

struct mtl_device {
	VkInstance instance;
	VkPhysicalDevice pdevice;
	VkPhysicalDeviceProperties props;
};
