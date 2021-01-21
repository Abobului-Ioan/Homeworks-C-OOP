#include "vb.h"


vb vb::operator + (vb v) //suma a doi vectori
{
	vb r;
	r.e1 = e1 + v.e1;
	r.e2 = e2 + v.e2;
	return r;
}

vb vb::operator - () //negativarea unui vector
{
	vb r;
	r.e1 = -e1;
	r.e2 = -e2;
	return r;
}

vb vb::operator - (vb v) //diferenta a doi vectori
{
	return (*this)+(-v);
}

vb vb::operator * (int a) //produsul dintre un vector si un numar
{
	vb r;
	r.e1 = a*e1;
	r.e2 = a*e2;
	return r;
}

vb operator * (int a, vb v) //produsul dintre un numar si un vector
{
	return v*a;
	/*operatorul * este supraincarcat pentru produsul dintre un vector si
	un numar prin functia precedenta */
}

double vb::operator * (vb v) //produsul scalar a doi vectori
{
	return e1*v.e1+e2*v.e2;
}

void vb::citire(char *s)
{
	cout << "\nDati elementele vetorului " << s <<":\n";
	cout << "\tprimul element: ";
	cin >> e1;
	cout << "\tal doilea element: ";
	cin >> e2;
}

void vb::afisare(char* sir)
{
	cout << "\nVectorul " << sir <<": (" << e1 << "," << e2 <<")"<<endl;
}
