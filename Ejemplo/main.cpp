#include <iostream>
#include <stdlib.h>
#include "Punto.h"
#include "Punto3D.h"
using namespace std;

int main(void){
    Punto3D P;
    cout<<"P";
    P.muestraTusDatos();
    cout<<endl<<endl;

    cout<<"P"<<endl;
    P.pideleAlUsuarioTusDatos();
    cout<<endl;
    cout<<"P";
    P.muestraTusDatos();
    cout<<endl<<endl;

    cout<<"z de  P = "<<P.dameTuZ()<<endl<<endl;

    cout<<"P.modificaTuZ(4); => P";
    P.modificaTuZ(4);
    P.muestraTusDatos();
    cout<<endl<<endl;

    cout<<"P.modificaTusDatos(5,6,7); => P";
    P.modificaTusDatos(5,6,7);
    P.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}















