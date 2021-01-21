#ifndef BANCA_H
#define BANCA_H
#include <iostream>
using namespace std;


class Banca
{
    public:
        void DeschideC();
        void ArataC();
        void Depoziteaza();
        void Extrage();
        int Cauta(int a);

    protected:

    private:
        int nrC;
        char nume[30];
        long sold;
};

#endif // BANCA_H
