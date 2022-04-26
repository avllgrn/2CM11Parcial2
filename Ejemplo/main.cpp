#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "CirculoP.h"
using namespace std;

int main(void){
    CirculoP Q(1,2,3,4);

    Q.muestraTusDatos();//Vemos 1,2,3,4
    cout<<endl<<endl;

    Punto CopiaDeC;

    CopiaDeC = Q.dameTuC();
    CopiaDeC.modificaTuX(5);
    Q.modificaTuC(CopiaDeC);
    Q.muestraTusDatos();//풴eremos 5,2,3,4?
    cout<<endl<<endl;

    CopiaDeC = Q.dameTuC();
    CopiaDeC.modificaTuY(6);
    Q.modificaTuC(CopiaDeC);
    Q.muestraTusDatos();//풴eremos 5,6,3,4?
    cout<<endl<<endl;

    Punto CopiaDeP;

    CopiaDeP = Q.dameTuP();
    CopiaDeP.modificaTuX(7);
    Q.modificaTuP(CopiaDeP);
    Q.muestraTusDatos();//풴eremos 5,6,7,4?
    cout<<endl<<endl;

    CopiaDeP = Q.dameTuP();
    CopiaDeP.modificaTuY(8);
    Q.modificaTuP(CopiaDeP);
    Q.muestraTusDatos();//풴eremos 5,6,7,8?
    cout<<endl<<endl;

    return 0;
}
