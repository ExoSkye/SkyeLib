#include <SkyeLib.h>
#include <stdio.h>

extern SkyeLibConfig SKYE_LIB_CONFIG;

int main() {
    if (SKYE_LIB_CONFIG.resolution.x == -1 && SKYE_LIB_CONFIG.resolution.y == -1) {
        // Set to configured resolution
    }

    // do other shit

    printf("%i\n", SKYE_LIB_CONFIG.main(SKYE_LIB_CONFIG));
}
