#include "baza2.h"

baza2::baza2(int yy)
{
    y = yy;
    cout << "Constructor baza2\n" << y <<'\n';
}

baza2::~baza2()
{
    cout << "Destructor baza2\n";
}

void baza2::aratay()
{
    cout << "y=" << y <<'\n';
}
