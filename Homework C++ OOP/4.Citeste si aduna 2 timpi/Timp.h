#ifndef TIMP_H
#define TIMP_H
#include <iostream>

using namespace std;
class Timp
{
private:
    int ore;
    int minute;
    int secunde;

public:
    void citeste();
    void afiseaza();
    void adunareTimp(Timp T1,Timp T2);
};



#endif // TIMP_H
