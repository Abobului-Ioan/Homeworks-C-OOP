#include <iostream>
#include "Timp.h"

using namespace std;


int main()
{
    Timp T1,T2,T3;
    T1.citeste();
    T2.citeste();
    //add two Timps
    T3.adunareTimp(T1,T2);
    T3.afiseaza();

    return 0;
}
