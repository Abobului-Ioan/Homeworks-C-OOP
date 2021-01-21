#include <iostream>
#include "Punct.h"

using namespace std;

int main()
{
    Punct p1, p2;

    p1.seteazaPunct(5, 10);
    p2.seteazaPunct(50, 100);

    cout << "p1: " << p1.getX() <<" , " << p1.getY() << endl;
    cout << "p2: " << p2.getX() <<" , " << p2.getY() << endl;

    return 0;
}
