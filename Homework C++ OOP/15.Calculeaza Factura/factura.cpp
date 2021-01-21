#include "factura.h"

void factura::get()
{
    cout<<"Introdu detalii despre client, mai jos: \n" <<endl;
    cout<<"nr client: ";
    cin>>c_nr;
    cout<<"\nIntrodu numele clientului: ";
    cin>>c_nume;
    cout<<"\nIntrodu cantitatea: ";
    cin>>cantitate;
}

void factura::put()
{
    cout<<"\nDetalii despre client sunt: " <<endl;
    cout<<"\nNumarul clientului este: "<<c_nr;
    cout<<"\n\nNumele clientului este: "<<c_nume;
    cout<<"\n\nCantitatea : "<<cantitate;
    cout<<"\n\nFactura client : "<<c_factura;
}
void factura::calc_c_factura()
{
    if(cantitate<=100)
        c_factura=cantitate*1.20;
    else if(cantitate<=300)
        c_factura=100*1.20+(cantitate-100)*2;
    else
        c_factura=100*1.20+200*2+(cantitate-300)*3;
}
