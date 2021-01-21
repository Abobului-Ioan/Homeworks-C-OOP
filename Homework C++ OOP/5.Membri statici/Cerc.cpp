#include "Cerc.h"

Cerc::Cerc(double r)
{
   raza = r;
   nr++; //creste de fiecare data cand este creat un obiect nou
}
double Cerc::Aria()
{
    return (3.14 * raza * raza);

}


int Cerc::nr = 0;
