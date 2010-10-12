#include "pixel.h"

Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b){
  this->r=r; this->g=g; this->b=b;
}
void Pixel::gray(){
  unsigned char x=0.3*r+0.59*g+0.11*b;
  r=g=b=x;
}

