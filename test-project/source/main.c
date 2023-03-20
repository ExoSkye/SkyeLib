#include <SkyeLib.h>

int entrypoint(SkyeLibConfig config) {
    return 0;
}

SKYE_LIB_START_CONFIG()
SKYE_LIB_DEFAULT_RESOLUTION()
SKYE_LIB_SET_NAME("Hello World!")
SKYE_LIB_SET_ENTRY(entrypoint)
SKYE_LIB_SET_EXIT(NULL)
SKYE_LIB_END_CONFIG()

