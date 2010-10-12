#include <iostream>
#include "image.h"
#include <cstring> //compare

using namespace std;

Image::Image(){data=0; width=0; height=0;}
Image::Image(int width, int height) {
  this->width=width; this->height=height;
  data=new Pixel[width*height];
}
Image::Image(std::istream &fin){
  data=0; readppm(fin);
}
//Image::Image(const Image& pic){
  
//}
Image::~Image(){ 
  delete[] data;
}
void Image::grey(){
  int npixels=width*height,i;
  i=npixels;
  while(i){
    data[i].grey();
    i--;}
    
}
int Image::gwidth() const{return width;}
int Image::gheight() const{return height;}
int Image::index(int row, int col) const{
  return row*width+col;}

Pixel& Image::operator()(int row, int col){
  return data[index(row,col)];
}
bool Image::operator== (const Image& pic){
  if(this->width!=pic.width || this->height!=pic.height)
    return false;
  else{
    for(int i=0;i<this->width*this->height;i++)
      if(this->data[i]!=pic.data[i])
	return false;
    return true;}
}
bool Image::readppm (std::istream &fin){
  //Cannot use comments on ppm file
  data=0; width=height=0; int i=0;
  const long int buff=1000; int max,max2,npixels,r,g,b;
  char str[buff];
  fin >> str;
  if (strcmp(str,"P3") != 0 ){ 
    cerr << "Not P3 header\n";
    return false;}
  fin >> width >> height >> max; max2=255/max;
  npixels=width*height; data=new Pixel[npixels];
  while (i<npixels){
    fin >> r >> g >> b;
    data[i]=Pixel(r*max2,g*max2,b*max2); i++;}
  return true;
}

void Image::writeppm (std::ostream &fout) const{
  fout << "P3" << endl << width << ' '
       << height << '\n' << "255" << '\n';
  int npixels = width*height;
  for (int i=0; i<npixels; i++)
    fout << (int)data[i].r << ' ' << (int)data[i].g 
	 << ' ' << (int)data[i].b << endl;
}
