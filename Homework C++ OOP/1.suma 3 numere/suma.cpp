#include "suma.h"

suma::suma()
{
    s=0;
    a=0;
    b=0;
    c=0;
}
suma::suma(int a,int b,int c)
{
    this->a=a;
    this->b=b;
    this->c=c;
    s=a+b+c;
}


void suma::afisare()
{
    cout <<"Suma este:" <<s;
}
