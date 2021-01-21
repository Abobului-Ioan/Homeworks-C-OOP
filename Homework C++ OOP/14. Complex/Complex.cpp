#include "Complex.h"


Complex::Complex()
{
    real=imag=0;
}

Complex::Complex(double r)
{
    real=r;
    imag=0;
}

Complex::Complex(double r, double i)
{
    real=r;
    imag=i;
}

Complex::Complex(Complex &obj)
{
    real=obj.real;
    imag=obj.imag;
}

Complex Complex::adunare(Complex c)
{
    Complex adunare;
    adunare.real = real + c.real;
    adunare.imag = imag + c.imag;
    return adunare;
}

Complex Complex::scadere(Complex c)
{
    Complex Scadere;
    Scadere.real = real - c.real;
    Scadere.imag = imag - c.imag;
    return Scadere;
}

Complex Complex::imultire(Complex c)
{
    Complex Imultire;
    Imultire.real = (real*c.real) - (imag*c.imag);
    Imultire.imag = (real*c.imag) - (c.real*imag);
    return Imultire;
}

Complex Complex::impartire(Complex c)
{
    Complex Impartire;
    Impartire.real = (real*c.real + imag*c.imag)/(c.real*c.real + c.imag*c.imag);
    Impartire.imag = (imag*c.real + real*c.imag)/(c.real*c.real + c.imag*c.imag);
    return Impartire;
}

void Complex::print()
{
    cout<<real<<"+"<<imag<<"i"<<endl<<endl;
}

double Complex::getReal()
{
    return real;
}

double Complex::getImag()
{
    return imag;
}

void Complex::setReal(double re)
{
    real = re;

}

void Complex::setImag(double im)
{
    imag = im;
}
