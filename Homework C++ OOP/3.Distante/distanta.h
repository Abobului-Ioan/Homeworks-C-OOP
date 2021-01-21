#ifndef DISTANTA_H
#define DISTANTA_H
#include <iostream>

using namespace std;


class distanta
{
    public:
        distanta();
        void scrie();
        void arata();
        distanta aduna(distanta d2);
        distanta scade(distanta d2);


    protected:

    private:
        double dist;
};

#endif // DISTANTA_H
