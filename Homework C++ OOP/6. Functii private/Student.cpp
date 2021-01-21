#include "Student.h"


void Student::citeste(void)
{
    dateOn();
    cout << "Introdu id: ";
    cin >> id;
    cout << "Introdu procentajul: ";
    cin >> proc;
    dateOff();
}
void Student::afiseaza(void)
{
    cout << endl;
    cout <<"ID: " << id <<endl;
    cout <<"Procentaj: " << proc << "%" <<endl;
}
