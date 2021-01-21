#include "derivat.h"

derivat::derivat(int xx, int yy):baza1(xx), baza2(yy)
{
    cout << "Constructor derivat\n";
    cout << x << ' ' << y <<'\n';
}
derivat::~derivat()
{
    cout << "Destructor derivat\n";
    cout << x <<' ' << y <<'\n';
}
int derivat::arata()
{
    cout << x <<' '<< y <<'\n';
}
void derivat::seteaza(int xx, int yy)
{
    x = xx;
    y = yy;
}
