#include <iostream>
#include "vb.h"
using namespace std;

int main()
{
	vb a;
	a.citire("a");
	a.afisare("a");
	cout<<"Elementele vectorului <b> le vom introduce direct la initializare.";
	vb b(2.5,1);
	b.afisare("b");
	vb c;
	c = a + b;
	c.afisare("a + b");
	c= a - b;
	c.afisare("a - b");
	c = 3 * a + 4 * b;
	c.afisare("3 * a + 4 * b");
	c = a*2-b*4;
	c.afisare("a * 2 - b * 4");
	c = -a - b;
	c.afisare("-a - b");
	cout<<"\nProdusul cartezian: "<<a * b<<endl;

	int g;
	cin >> g;

	return 0;
}
