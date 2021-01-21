#include "Timp.h"



void Timp::citeste()
{
    cout << "Introdu timpul:" << endl;
    cout << "ore? ";    cin>>ore;
    cout << "minute? ";  cin>>minute;
    cout << "secunde? ";  cin>>secunde;
}

void Timp::afiseaza()
{
    cout << endl;
    cout << "Timp dupa adunare: ";
    cout << ore << ":" << minute << ":" << secunde << endl;
}

void Timp::adunareTimp(Timp T1,Timp T2)
{

    this->secunde=T1.secunde+T2.secunde;
    this->minute=T1.minute+T2.minute + this->secunde/60;;
    this->ore= T1.ore+T2.ore + (this->minute/60);
    this->minute %=60;
    this->secunde %=60;
}
