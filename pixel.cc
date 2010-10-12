#include "pixel.h"
typedef unsigned char uchar;
Pixel::Pixel(uchar r,uchar g,uchar b){
  this->r=r; this->g=g; this->b=b;
}
bool Pixel::operator== (Pixel& a){
  if (a.r==this->r && a.g==this->g && a.b==this->b)
    return true;
  else return false;}

bool Pixel::operator!= (Pixel& a){
  if (operator== (a))return false;
  else return true;
}
void Pixel::grey(){
  uchar x=0.3*r+0.59*g+0.11*b;
  r=g=b=x;
}

