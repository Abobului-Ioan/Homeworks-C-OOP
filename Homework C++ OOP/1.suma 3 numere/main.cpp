#include <iostream>
#include "suma.h"

using namespace std;

int main()
{
    int a,b,c;
    cout <<"a=";
    cin >>a;
    cout <<"b=";
    cin >>b;
    cout <<"c=";
    cin >>c;
    suma f(a,b,c);
    f.afisare();

    return 0;
}
