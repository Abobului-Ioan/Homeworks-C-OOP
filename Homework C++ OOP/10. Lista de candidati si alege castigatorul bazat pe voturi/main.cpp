#include <iostream>
#include "Candidat.h"
using namespace std;

int main()
{
    string s;
    int v;
    Candidat lista[3];
    cout << "Introdu numele candidatilor, sunt 3 candidati\n";
    for(int i = 0; i < 3; i++)
    {
        cout<<"introdu candidatul "<<i+1<<" prenumele\n";
        cin>>s;
        lista[i].nume = s;
        cout<<"introduceti numarul de voturi primite de candidat "<<i+1<<endl;
        cin>>v;
        lista[i].voturi = v;
    }
    outAlegeri(lista);
    return 0;
}
