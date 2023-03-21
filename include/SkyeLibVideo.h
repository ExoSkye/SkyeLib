#ifndef SKYE_LIB_SKYELIBVIDEO_H
#define SKYE_LIB_SKYELIBVIDEO_H

// Utility Functions

void skye_lib_video_wait_for_flip();

void skye_lib_video_wait_for_rsx_idle();

void skye_lib_video_wait_for_finish();

// Basic API functions

void skye_lib_video_init();

void skye_lib_video_flip();

void skye_lib_video_exit();

void skye_lib_video_set_render_target();

#endif
