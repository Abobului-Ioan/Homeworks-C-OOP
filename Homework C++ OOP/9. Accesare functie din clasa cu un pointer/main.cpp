#include <iostream>
#include "Numar.h"

using namespace std;

int main()
{
    Numar N;
    N.introducereNumar();
    N.afisareNumar();
    // declaram un pointer la obiect
    Numar *ptrN;
    ptrN = new Numar; //creem si alocam memorie
    ptrN ->introducereNumar();
    ptrN ->afisareNumar();

    return 0;
}
