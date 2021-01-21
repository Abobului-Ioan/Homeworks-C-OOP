#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;


class Student
{
    public:
        void citeste(void);
        void afiseaza(void);

    private:
        int  id;
        float proc;
        void dateOn(void)
        {
            cout << "Introducere inceputa..." << endl;

        }
        void dateOff(void)
        {
            cout << "Introducere oprita... " << endl;
        }
};

#endif // STUDENT_H
