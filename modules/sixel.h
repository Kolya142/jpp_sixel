#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include "jpp_types.h"

#ifndef SIXEL_H
#define SIXEL_H

struct SixelImage {
    U8 *image;
    U8 *color;
    U16 width, height;
};

#ifndef __cplusplus
typedef struct SixelImage SixelImage;
#endif

U16 rgb_to_16(U16 R, U16 G, U16 B);
SixelImage *si_init(u16 w, u16 h);
void si_pset(SixelImage *self, u16 x, u16 y, U8 c);
void si_cset(SixelImage *self, u16 x, u16 y, U8 c);
U8 si_pget(SixelImage *self, u16 x, u16 y);
U8 si_print(SixelImage *self, FILE *out);

#endif