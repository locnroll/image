#ifndef _IMAGE_
#define _IMAGE_

#include <iostream>
#include "pixel.h"
using namespace std;

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
  bool readppm (istream &fin);
  void writeppm (ostream &fout) const;
};

#endif
