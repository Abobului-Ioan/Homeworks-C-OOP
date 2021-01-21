#include "Punct.h"

Punct::Punct()
{
    X = 0;
    Y = 0;
}
void Punct::seteazaPunct(int a, int b)
{
    X = a;
    Y = b;
}

int Punct::getX(void)
{
    return X;
}

int Punct::getY(void)
{
    return Y;
}
