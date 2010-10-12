#ifndef _PIXEL_
#define _PIXEL_

class Pixel{
 public:
  unsigned char r,g,b;
  Pixel(unsigned char r=0, unsigned char g=0, unsigned char b=0); // default value (0,0,0)
  void gray();
};
#endif
