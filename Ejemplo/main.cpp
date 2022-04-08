#include <iostream>
#include <stdlib.h>
#include "Fecha.h"
#include "Hora.h"
using namespace std;

int main(void){

    Fecha F1, F2(14,10,2022);
    Hora H1, H2(10,42,39);

    //Prueba para constructores y muestraTusDatos()
    cout<<"F1 = ";F1.muestraTusDatos();
    cout<<"H1 = ";H1.muestraTusDatos();
    cout<<endl;
    cout<<"F2 = ";F2.muestraTusDatos();
    cout<<"H2 = ";H2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");


    //Prueba para pideleAlUsuarioTusDatos()
    cout<<"F1 = ";F1.muestraTusDatos();
    cout<<"H1 = ";H1.muestraTusDatos();
    cout<<endl<<endl;

    cout<<"F1"<<endl;F1.pideleAlUsuarioTusDatos();
    cout<<"H1"<<endl;H1.pideleAlUsuarioTusDatos();

    cout<<"F1 = ";F1.muestraTusDatos();
    cout<<"H1 = ";H1.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");


    //Pruebas para metodos que retornan copia de atributo
    cout<<"F1"<<endl
        <<F1.dameTuDia()<<endl
        <<F1.dameTuMes()<<endl
        <<F1.dameTuAnio()<<endl<<endl;
    cout<<"H1"<<endl
        <<H1.dameTuHora()<<endl
        <<H1.dameTuMinuto()<<endl
        <<H1.dameTuSegundo()<<endl;
    cout<<endl;
    cout<<"F2"<<endl
        <<F2.dameTuDia()<<endl
        <<F2.dameTuMes()<<endl
        <<F2.dameTuAnio()<<endl<<endl;
    cout<<"H2"<<endl
        <<H2.dameTuHora()<<endl
        <<H2.dameTuMinuto()<<endl
        <<H2.dameTuSegundo()<<endl;
    cout<<endl<<endl;
    system("pause");
    system("cls");


    //Pruebas para metodos que modifican un atributo
    cout<<"F1 = ";F1.muestraTusDatos();
    cout<<"H1 = ";H1.muestraTusDatos();
    cout<<endl;
    cout<<"F2 = ";F2.muestraTusDatos();
    cout<<"H2 = ";H2.muestraTusDatos();
    cout<<endl<<endl;

    cout<<"F1 modificado con los datos de F2"<<endl;
    F1.modificaTuDia(F2.dameTuDia());
    F1.modificaTuMes(F2.dameTuMes());
    F1.modificaTuAnio(F2.dameTuAnio());
    cout<<"H1 modificado con los datos de H2"<<endl<<endl;
    H1.modificaTuHora(H2.dameTuHora());
    H1.modificaTuMinuto(H2.dameTuMinuto());
    H1.modificaTuSegundo(H2.dameTuSegundo());

    cout<<"F1 = ";F1.muestraTusDatos();
    cout<<"H1 = ";H1.muestraTusDatos();
    cout<<endl;
    cout<<"F2 = ";F2.muestraTusDatos();
    cout<<"H2 = ";H2.muestraTusDatos();
    cout<<endl<<endl;
    system("pause");
    system("cls");


    //Pruebas para metodo que modifica todos los atributos
    cout<<"F1 = ";F1.muestraTusDatos();
    cout<<"H1 = ";H1.muestraTusDatos();
    cout<<endl;
    cout<<"F2 = ";F2.muestraTusDatos();
    cout<<"H2 = ";H2.muestraTusDatos();
    cout<<endl<<endl;

    F1.modificaTusDatos(9,8,2007);
    H1.modificaTusDatos(6,5,4);
    F2.modificaTusDatos(1,3,2015);
    H2.modificaTusDatos(7,9,11);

    cout<<"F1 modificado = ";F1.muestraTusDatos();
    cout<<"H1 modificado = ";H1.muestraTusDatos();
    cout<<endl;
    cout<<"F2 modificado = ";F2.muestraTusDatos();
    cout<<"H2 modificado = ";H2.muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
