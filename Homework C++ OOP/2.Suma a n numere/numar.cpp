#include "numar.h"

numar::numar()
{
    //ctor
}

void numar::intrare()
{
    cout << "Cate numere vrei sa introduci? " << endl;
    cin >> n;
    cout << "Introduceti " << n <<" numere:" << endl;
    for(i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Numerele introduse sunt: ";
    for(i = 0; i < n; i++)
    {
        cout << num[i] << "\t";
    }

}

void numar::suma()
{
    sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += num[i];
    }
}
void numar::afisare()
{
    cout <<endl << "Suma celor " << n <<" numere este: " << sum;
}
