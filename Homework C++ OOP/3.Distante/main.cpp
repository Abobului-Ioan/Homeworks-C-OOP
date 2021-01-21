#include <iostream>
#include "distanta.h"

using namespace std;

int main()
{
    distanta d1;
    distanta d2;
    distanta d3;
    distanta d4;
    cout << "prima distanta: " << endl;
    d1.scrie();
    cout << "a doua distanta: " << endl;
    d2.scrie();
    d3 = d1.aduna( d2 );
    d4 = d1.scade( d2 );
    cout << endl << "Distanta 1 : " ;
    d1.arata();
    cout << endl << "Distanta 2 : " ;
    d2.arata();
    cout << endl << "Distanta 1 + Distanta 2 = " ;
     d3.arata() ;
    cout << endl << "Distanta 1 - Distanta 2 = " ;
     d4.arata() ;
    return 0;
}
