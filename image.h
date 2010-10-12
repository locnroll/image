#ifndef _IMAGE_
#define _IMAGE_

#include <iostream>
#include "pixel.h"


class Image{
  Pixel *data;
  int width, height;
 public:
  Image();
  Image(int width, int height);
  Image(std::istream &fin);
  ~Image();
  int gwidth() const;
  int gheight() const;
  int index(int row, int col) const;
  Pixel& operator()(int row, int col);
  bool operator== (const Image& pic);
  bool readppm (std::istream &fin);
  void writeppm (std::ostream &fout) const;
  void grey();
};

#endif
