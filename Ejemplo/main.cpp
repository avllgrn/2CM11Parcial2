#include <iostream>
#include <stdlib.h>
#include "Evento.h"
using namespace std;

int main(void){
    //Pruebas para constructores
    //y muestraTusDatos()
    cout<<"Pruebas para constructores y muestraTusDatos()"<<endl<<endl;
    Evento E1;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;

    Fecha OtraF(16,9,1810);
    Hora OtraH(5,4,3);
    Evento E2(OtraF,OtraH);
    cout<<"E2"<<endl;
    E2.muestraTusDatos();cout<<endl;

    Evento E3(32,14,-1,24,60,61);
    cout<<"E3"<<endl;
    E3.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Prueba para pideleAlUsuarioTusDatos()
    cout<<"Prueba para pideleAlUsuarioTusDatos()"<<endl
        <<"Ingrese Fecha y Hora incorrectas. Ejemplo: -1/0/0 y -1:-1:-1"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;

    cout<<"E1"<<endl;
    E1.pideleAlUsuarioTusDatos();cout<<endl;

    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para pideleAlUsuarioTusDatos()"<<endl
        <<"Ingrese Fecha y Hora correctas. Ejemplo: 3/4/2012 y 5:6:7"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;

    cout<<"E1"<<endl;
    E1.pideleAlUsuarioTusDatos();cout<<endl;

    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para dameTuF(), dameTuH(),
    //modificaTuF() y modificaTuH()
    cout<<"Pruebas para dameTuF(), dameTuH(), "
        <<"modificaTuF() y modificaTuH()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;
    cout<<"E2"<<endl;
    E2.muestraTusDatos();cout<<endl;

    E1.modificaTuF(E2.dameTuF());
    E1.modificaTuH(E2.dameTuH());
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para modificaTuF() y modificaTuH()
    cout<<"Pruebas para modificaTuF() y modificaTuH()"<<endl<<endl;
    cout<<"E2"<<endl;
    E2.muestraTusDatos();cout<<endl;
    cout<<"E3"<<endl;
    E3.muestraTusDatos();cout<<endl;

    E2.modificaTuF( E3.dameTuF().dameTuDia()
                    ,
                    E3.dameTuF().dameTuMes()
                    ,
                    E3.dameTuF().dameTuAnio()
    );
    E2.modificaTuH( E3.dameTuH().dameTuHora()
                    ,
                    E3.dameTuH().dameTuMinuto()
                    ,
                    E3.dameTuH().dameTuSegundo()
    );

    cout<<"E2"<<endl;
    E2.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Prueba para modificaTusDatos()
    cout<<"Prueba para modificaTusDatos()"<<endl<<endl;
    cout<<"E2"<<endl;
    E2.muestraTusDatos();cout<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;

    E2.modificaTusDatos(E1.dameTuF(), E1.dameTuH());

    cout<<"E2"<<endl;
    E2.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Prueba para modificaTusDatos()
    cout<<"Prueba para modificaTusDatos()"<<endl<<endl;
    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;
    cout<<"E3"<<endl;
    E3.muestraTusDatos();cout<<endl;

    E1.modificaTusDatos(
        E3.dameTuF().dameTuDia(), E3.dameTuF().dameTuMes(), E3.dameTuF().dameTuAnio()
        ,
        E3.dameTuH().dameTuHora(), E3.dameTuH().dameTuMinuto(),E3.dameTuH().dameTuSegundo()
    );

    cout<<"E1"<<endl;
    E1.muestraTusDatos();cout<<endl;

    return 0;
}
