#ifndef DERIVAT_H
#define DERIVAT_H
#include "baza1.h"
#include "baza2.h"
#include <iostream>

using namespace std;

class derivat: public baza1, public baza2 {
public:
      derivat(int xx, int yy);
      ~derivat();
      int arata();
      void seteaza(int xx, int yy);

};

#endif // DERIVAT_H
