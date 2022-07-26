/*
 * Provides the Indium C ABI for Metal. This is trivial to convert to actual
 * Metal stuff but I'll worry about that later.
 */
#pragma once

typedef struct mtl_device mtl_device;
typedef struct mtl_command_queue mtl_command_queue;

char const *mtl_device_name(mtl_device *self);
