#include "Banca.h"

void Banca::DeschideC()
{
   cout << "Introdu numarul la cont: ";
   cin >> nrC;
   cout << "Introdu numele: ";
   cin >> nume;
   cout << "Introdu suma(soldul) ";
   cin >> sold;
}

void Banca::ArataC()
{
    cout << "Numar cont: " << nrC << endl;
    cout << "Nume: " << nume << endl;
    cout << "Sold: " << sold << endl;
}

void Banca::Depoziteaza()
{
    long amt;
    cout << "Introdu suma pe care vreti sa o depozitati: ";
    cin >> amt;
    sold = sold + amt;
}

void Banca::Extrage()
{
    long amt;
    cout << "Introdu suma pe care vreti sa o depozitati: ";
    cin >> amt;
    if (amt <= sold)
        sold = sold - amt;
    else
        cout << "Nu ai destui bani in cont";

}

int Banca::Cauta(int a)
{
    if( nrC == a)
    {
        ArataC();
        return (1);
    }
    return (0);
}
