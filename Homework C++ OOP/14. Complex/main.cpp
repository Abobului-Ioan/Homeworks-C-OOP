#include "Complex.h"


using namespace std;

int main()
{
    double real1,imag1,real2,imag2;

    cout << "Introduce-ti parte reala a primului numar: ";
    cin >> real1;
    cout << "Introduce-ti parte imaginara a primului numar: ";
    cin >> imag1;
    Complex obj1(real1,imag1);
    cout << "Primul numar complex:";
    obj1.print();

    cout << "Introduce-ti parte reala pentru al doilea numar: ";
    cin >> real2;
    cout << "Introduce-ti parte imaginare pentru al doilea numar: ";
    cin >> imag2;
    Complex obj2(real2,imag2);
    cout << "Al doilea numar complex:";
    obj2.print();

    Complex c;
    c = obj1.adunare(obj2);
    cout << "Adunarea : (" << c.getReal() << ")+(" << c.getImag() <<")i" << endl;
    c = obj1.scadere(obj2);
    cout << endl << "Scaderea : (" << c.getReal() << ")+(" << c.getImag() << ")i" << endl;

    c = obj1.imultire(obj2);
    cout << endl << "Imultirea : (" << c.getReal() <<")+(" << c.getImag() << ")i" << endl;

    c = obj1.impartire(obj2);
    cout << endl << "Impartirea : (" << c.getReal() << ")+(" << c.getImag() << ")i" << endl;

    return 0;
}
