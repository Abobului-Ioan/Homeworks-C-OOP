#include "baza1.h"

baza1::baza1(int xx)
{
    x = xx;
    cout << "Constructor cls. baza1\n";
    cout << x <<'\n';
}

baza1::~baza1()
{
    cout << "Destructor baza1\n" << x <<'\n';
}

void baza1::aratax()
{
    cout << "x=" << x <<'\n';
}
