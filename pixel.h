#ifndef _PIXEL_
#define _PIXEL_
typedef unsigned char uchar;
struct Pixel{
  uchar r,g,b;
  Pixel(uchar r=0, uchar g=0, uchar b=0);
  void gray();
};
#endif
