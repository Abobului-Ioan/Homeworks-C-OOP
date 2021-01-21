#include "Candidat.h"


void outAlegeri(Candidat* lista)
{
    int total_voturi = 0;
    for(int i = 0; i < 3; i++)
    {
        ///aflam totalul de voturi
        total_voturi = total_voturi + lista[i].voturi;
    }
    cout << "Rezultat alegeri.............." << endl;
    cout << "Nume candidati" <<"\t" << "Voturi obtinute" <<"\t" <<"Procentaj" <<endl;
    for(int i = 0; i < 3; i++)
    {
        cout << lista[i].nume <<"\t\t\t";
        cout << lista[i].voturi <<"\t\t";
        cout << (lista[i].voturi * 100) / total_voturi << "%" <<endl;
    }
    int max INT_MIN, contor = 0;
    int index[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        if(lista[i].voturi>max)
        {
            max=lista[i].voturi;
        }
    }
    for( int i = 0; i < 3; i++)
    {
        if(lista[i].voturi == max)
        {
            index[contor]=i;
            contor++;
        }
    }
    if(contor == 1)
        cout << "Castigatorul este: " <<lista[index[contor-1]].nume << endl;
    else
    {
        cout << "Este egalitate intre: " <<endl;
        for( int i = 0; i < contor - 1; i++)
            cout << lista[index[i]].nume << ",";
        cout << lista[index[contor - 1]].nume << endl;
        cout << "Toti sunt castigatori\n";

    }

}
