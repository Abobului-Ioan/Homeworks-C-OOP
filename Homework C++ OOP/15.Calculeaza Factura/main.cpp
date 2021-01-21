#include <iostream>
#include "factura.h"

using namespace std;

int main()
{
    factura b1;
    b1.get();
    b1.calc_c_factura();
    b1.put();

    cout<<"\n";

    return 0;
}
