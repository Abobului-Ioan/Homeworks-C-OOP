#ifndef PUNCT_H
#define PUNCT_H
#include <iostream>
#include "Forma.h"

using namespace std;

class Punct : public Forma
{
public:
    void printNumeForma() const;
    void init() const;

};

#endif // PUNCT_H
