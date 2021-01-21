#include "Numar.h"

Numar::Numar()
{
    numar = 0;
}
void Numar::introducereNumar(void)
{
    cout << "Introdu un numar intreg: ";
    cin >> numar;
}

void Numar::afisareNumar(void)
{
    cout << "Numarul: " << numar << endl;
}

