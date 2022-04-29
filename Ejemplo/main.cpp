#include <iostream>
#include <stdlib.h>
#include "Empleado.h"
using namespace std;

int main(void){
    Fecha F(12,6,1999);
    Hora H(12,34,56);
    Evento E(13,8,2001,7,8,9);
    //Pruebas de constructores y muestraTusDatos()
    Empleado E1;
    Empleado E2("Juan","Perez","Lopez","m",1.82,E,2,4967.6,"Intendente");
    Empleado E3("Mario","Elmada","Juarez","masc.",1.76,F,H,3,5678.9,"General");
    Empleado E4("Laura","Zuniga","Ruiz","Fem.",1.86,29,4,2004,8,54,32,4,49876.54,"Gerente");

    cout<<"E1"<<endl;E1.muestraTusDatos();cout<<endl;
    cout<<"E2"<<endl;E2.muestraTusDatos();cout<<endl;
    cout<<"E3"<<endl;E3.muestraTusDatos();cout<<endl;
    cout<<"E4"<<endl;E4.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Prueba de pideleElUsuarioTusDatos()
    cout<<"E1"<<endl;E1.muestraTusDatos();cout<<endl;

    cout<<"E1"<<endl;E1.pideleAlUsuarioTusDatos();

    cout<<"E1"<<endl;E1.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Pruebas de dameTuNumero(),dameTuSueldo(),dameTuPuesto()
    //modificaTuNumero(),modificaTuSueldo() y modificaTuPuesto()
    cout<<"E1"<<endl;E1.muestraTusDatos();cout<<endl;
    cout<<"E2"<<endl;E2.muestraTusDatos();cout<<endl;

    E2.modificaTuNumero(E1.dameTuNumero());
    E2.modificaTuSueldo(E1.dameTuSueldo());
    E2.modificaTuPuesto(E1.dameTuPuesto());

    cout<<"E2"<<endl;E1.muestraTusDatos();cout<<endl;E1.dameTuEstatura();

    return 0;
}
