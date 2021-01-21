#ifndef FACTURA_H
#define FACTURA_H
#include <iostream>

using namespace std;


class factura
{
private:
    int c_nr;
    char c_nume[20];
    int cantitate;
    double c_factura;
public:
    void get();
    void put();
    void calc_c_factura();

};

#endif // FACTURA_H
