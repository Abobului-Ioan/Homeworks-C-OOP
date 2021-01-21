#ifndef PUNCT_H
#define PUNCT_H
#include <iostream>

using namespace std;


class Punct
{
    public:
        Punct();
        //functie setter
        void seteazaPunct(int a, int b);

        //functie getter
        int getX(void);
        int getY(void);


    private:
        int X,Y;
};

#endif // PUNCT_H
