#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex
{
public:

Complex();
Complex(double r);
Complex(double r, double i);
Complex(Complex &obj);
Complex adunare(Complex c);
Complex scadere(Complex c);
Complex imultire(Complex c);
Complex impartire(Complex c);
void print();
double getReal();
double getImag();
void setReal(double re);
void setImag(double im);

protected:

private:
    double real,imag;
};

#endif // COMPLEX_H
