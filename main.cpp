#include <iostream>
using namespace std;

//Aqui va la clase Fraccion

int main(void){
    Fraccion A;
    Fraccion F(8,9);
    A.muestraTusDatos();cout<<endl;

    F.muestraTusDatos();cout<<endl;

    F.pideleAlUsuarioTusDatos();
    F.muestraTusDatos();cout<<endl;

    F.modificaTuDenominador(3);
    F.muestraTusDatos();cout<<endl;

    F.modificaTuNumerador(4);
    F.muestraTusDatos();cout<<endl;

    F.modificaTusDatos(5,6);
    F.muestraTusDatos();cout<<endl;

    cout<<F.dameTuNumerador()<<endl;
    cout<<F.dameTuDenominador()<<endl;

    return 0;
}
