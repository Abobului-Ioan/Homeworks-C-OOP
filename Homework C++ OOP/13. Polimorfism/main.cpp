#include <iostream>
#include "Forma.h"
#include "Punct.h"

using namespace std;

int main()
{
    cout << "Functii apelate prin pointer la Forma:" << endl;
    Forma* FormaPtr = new Forma();
    FormaPtr->printNumeForma();
    FormaPtr->init();

    cout << "\nFunctii apelate prin pointer la Forma " << "initializat prin pointer la Punct:" << endl;
    Punct* PunctPtr = new Punct();
    FormaPtr = PunctPtr;
    cout << "Comportament polimorfic: ";
    FormaPtr->printNumeForma();
    FormaPtr->init();
    cout << "\nFunctii apelate prin obiect de tip Forma:" << endl;
    Forma Forma;
    Forma.printNumeForma();
    Forma.init();
    cout << "\nFunctii apelate prin obiect de tip Punct:" << endl;
    Punct Punct;
    Punct.printNumeForma();
    Punct.init();
    cout << "\nFunctie non-virtuala apelata prin pointer la " << "Forma:" << endl;
    FormaPtr = &Punct;
    cout << "Comportament non-polimorfic: ";
    FormaPtr->init();
    return 0;
}


