#include <iostream>
#include "Cerc.h"

using namespace std;

int main()
{
    Cerc c1(3.3);
    Cerc c2(4.5);
    c1.Aria();
    cout << "Numar de obiecte: " << Cerc::nr << endl;

    return 0;
}
