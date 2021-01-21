#include <iostream>
#include "Banca.h"

using namespace std;

int main()
{
    Banca C[2];

    int gasit = 0, a, ch, i;
    for (i = 0; i <= 1; i++) {
        C[i].DeschideC();
    }

    do {
        cout << "\n\n1:Arata tot\n2:Dupa nr cont\n3:Depoziteaza\n4:Extragere\n5:Exit" << endl;

        cout << "Alege optiune: ";
        cin >> ch;

        switch (ch) {
        case 1: // arata date cont
            for (i = 0; i <= 1; i++) {
                C[i].ArataC();
            }
            break;
        case 2: // cauta inregistrarea
            cout << "Nr cont? ";
            cin >> a;
            for (i = 0; i <= 1; i++) {
                gasit = C[i].Cauta(a);
                if (gasit)
                    break;
            }
            if (!gasit)
                cout << "Nu sa gasit" << endl;
            break;
        case 3: // operatiune de depozitare
            cout << "Nr cont in care vreti sa depozitati? ";
            cin >> a;
            for (i = 0; i <= 1; i++) {
                gasit = C[i].Cauta(a);
                if (gasit) {
                    C[i].Depoziteaza();
                    break;
                }
            }
            if (!gasit)
                cout << "Nu sa gasit" << endl;
            break;
        case 4: // operatiune extragere
            cout << "Nr cont din care vreti sa extrageti? ";
            cin >> a;
            for (i = 0; i <= 1; i++) {
                gasit = C[i].Cauta(a);
                if (gasit) {
                    C[i].Extrage();
                    break;
                }
            }
            if (!gasit)
                cout << "Nu sa gasit" << endl;
            break;
        case 5: // iesire
            cout << "Sa aveti o zi buna" << endl;
            break;
        default:
            cout << "Optiune gresita" << endl;
        }
    } while (ch != 5);
    return 0;
}
