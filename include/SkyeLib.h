#include "vec.h"

typedef struct SkyeLibConfig SkyeLibConfig;

typedef int (*SkyeLibMain)(SkyeLibConfig);

typedef struct SkyeLibConfig {
    vec2u resolution;
    const char* name;
    SkyeLibMain main;
} SkyeLibConfig;

#define SKYE_LIB_START_CONFIG() \
    SkyeLibConfig SKYE_LIB_CONFIG = {

#define SKYE_LIB_SET_RESOLUTION(RES_X, RES_Y) \
    .resolution = vec2u{RES_X, RES_Y},

#define SKYE_LIB_DEFAULT_RESOLUTION() \
    .resolution = {-1, -1},

#define SKYE_LIB_SET_NAME(NAME) \
    .name = NAME,

#define SKYE_LIB_SET_ENTRY(ENTRY) \
    .main = ENTRY,


#define SKYE_LIB_END_CONFIG() \
    };
