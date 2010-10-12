#include "image.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream fin;ofstream fout;
  fin.open("Lenna.ppm");
  fout.open("mypic.ppm");
  if (!fin || !fout){ cerr << "No fin\n";
    return -1;}
  Image img(fin);
  img.grey();
  img.writeppm(fout);
  fin.close();fout.close();
 return 0;
}
