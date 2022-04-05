#include <iostream>
#include "Punto.h"
#include "CirculoP.h"
using namespace std;

int main(void){
    double a=5,b=6,c=7,d=8;
    Punto A(1,2), B(3,4);
    CirculoP Q1, Q2(A, B), Q3(a,b,c,d);

    cout<<"Q1: ";
    Q1.muestraTusDatos();cout<<endl<<endl;
    cout<<"Q2: ";
    Q2.muestraTusDatos();cout<<endl<<endl;
    cout<<"Q3: ";
    Q3.muestraTusDatos();cout<<endl<<endl;

    cout<<"Q1"<<endl;
    Q1.pideleAlUsuarioTusDatos();
    cout<<endl<<"Q1: ";
    Q1.muestraTusDatos();
    cout<<endl<<endl;


    CirculoP Q4(Q1.dameTuC(), Q1.dameTuP());
    cout<<"Q4: ";
    Q4.muestraTusDatos();cout<<endl<<endl;
    cout<<endl<<endl;

    return 0;
}
