#include "image.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

Image* openImage(char * filename){
  // lectura de la imagen
  fstream fich_in;
  fich_in.open(filename,ios::in); // modo lectura
  if (!fich_in) {
    cerr << "Error opening " << filename << endl;
    return 0;
  }
  Image* img = new Image(fich_in);
  fich_in.close();
  
  return img;
}

int main(int argc, char **argv) {
  if (argc != 3) {
    cerr << "Usage " << argv[0]
	 << " image1.ppm image2.ppm" << endl;
    return 0;
  }
  char *filename_1 = argv[1];
  char *filename_2  = argv[2];

  Image* img_1=openImage(filename_1);
  Image* img_2=openImage(filename_2);

  if (*img_1== *img_2) cout << "Images are the same" << endl;
  else cout << "Images are different" << endl;

  
  return 0;
}

