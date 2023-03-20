#include <SkyeLib.h>
#include <stdio.h>
#include <sysutil/msg.h>
#include <sysutil/sysutil.h>

extern SkyeLibConfig SKYE_LIB_CONFIG;

static void sysutil_exit_callback(u64 status,u64 param,void *usrdata)
{
    switch(status) {
        case SYSUTIL_EXIT_GAME:
            break;
        case SYSUTIL_DRAW_BEGIN:
        case SYSUTIL_DRAW_END:
            break;
        default:
            break;
    }
}

void skye_lib_exit() {
    if (SKYE_LIB_CONFIG.exit_func != NULL) {
        SKYE_LIB_CONFIG.exit_func();
    }
}

int main() {
    sysUtilRegisterCallback(SYSUTIL_EVENT_SLOT0,sysutil_exit_callback,NULL);

    if (SKYE_LIB_CONFIG.resolution.x == -1 && SKYE_LIB_CONFIG.resolution.y == -1) {
        // Set to configured resolution
    }

    // do other shit

    printf("%i\n", SKYE_LIB_CONFIG.main(SKYE_LIB_CONFIG));
    skye_lib_exit();
}
