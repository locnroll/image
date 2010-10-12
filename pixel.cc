#include "pixel.h"
typedef unsigned char uchar;
Pixel::Pixel(uchar r,uchar g,uchar b){
  this->r=r; this->g=g; this->b=b;
}
void Pixel::gray(){
  uchar x=0.3*r+0.59*g+0.11*b;
  r=g=b=x;
}

