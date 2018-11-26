#ifndef CEDRIVER_CAM_H
#define CEDRIVER_CAM_H

#include "threadsafe_queue.h"

struct img_pkg
{
    unsigned char data[IMG_BUF_SIZE_WVGA];
    double timestamp;
};

struct d1_img_output_pkg
{
    img_pkg *left_img;
    img_pkg *right_img;
};

int ce_cam_capture_init();
void ce_cam_capture_close();
int ce_cam_showimg_init();
void ce_cam_showimg_close();
int ce_cam_preprocess_init();
void ce_cam_preprocess_close();

int ce_cam_write_deviceid_D1();
int ce_cam_write_deviceid_S1();

#if 1
#define CE_COUT std::cout
#else
#define CE_COUT  g_PrintfFile
#endif

#endif
