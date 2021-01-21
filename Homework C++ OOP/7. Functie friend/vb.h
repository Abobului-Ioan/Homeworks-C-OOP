#ifndef VB_H
#define VB_H
#include <iostream>

using namespace std;

class vb
{
	float e1,e2; //elementele vectorului
	public:
	//constructor de initializare cu parametri
	vb(float, float);
	//rescrierea constructorului implicit de initializare
	vb(){}
	//suma a doi vectori: r=vb1+vb2
	vb operator+(vb);
	//negativarea unui vector: r=-vb
	vb operator-();
	//diferenta a doi vectori: r=vb1-vb2
	vb operator-(vb);
	//produsul dintre un vector si un numar: r=vb*a
	vb operator*(int);
	//produsul dintre un numar si un vector oarecare: r=a*vb
	friend vb operator*(int, vb);
	//produsul scalar a 2 vectori r=(vb1,vb2)
	double operator*(vb);
	//citirea unui vector
	void citire(char*);
	//afisarea unui vector
	void afisare(char*);
};
inline vb::vb(float a, float b)
{
	e1 = a;
	e2 = b;
}

#endif // VB_H
