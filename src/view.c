#include <metal.h>
#include <vulkan/vulkan.h>

struct mtk_view {
	VkInstance *instance;
};

typedef struct mtk_wl_view {
	mtk_view base;
};

mtk_view *mtl_create_headless_view() {
	mtk_view ret;

}
