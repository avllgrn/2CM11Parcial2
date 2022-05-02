#include <iostream>
#include <stdlib.h>
#include "Profesor.h"
using namespace std;

int main(void){
    Fecha F(12,6,1999);
    Hora H(12,34,56);
    Evento E(13,8,2001,7,8,9);
    //Pruebas de constructores y muestraTusDatos()
    Profesor P1;
    Profesor P2("Juan","Perez","Lopez","m",1.82,E,2,4967.6,"Profe",1,4,"Plectronica");
    Profesor P3("Mario","Almada","Juarez","masc.",1.76,F,H,3,5678.9,"Teacher",2,9,"Humanidades");
    Profesor P4("Laura","Zuniga","Ruiz","Fem.",1.86,29,4,2004,8,54,32,4,49876.54,"Miss",3,12.5,"Fisica");

    cout<<"P1"<<endl;P1.muestraTusDatos();cout<<endl;
    cout<<"P2"<<endl;P2.muestraTusDatos();cout<<endl;
    cout<<"P3"<<endl;P3.muestraTusDatos();cout<<endl;
    cout<<"P4"<<endl;P4.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Prueba de pidelePlUsuarioTusDatos()
    cout<<"P1"<<endl;P1.muestraTusDatos();cout<<endl;

    cout<<"P1"<<endl;P1.pideleAlUsuarioTusDatos();

    cout<<"P1"<<endl;P1.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Pruebas de dameTuNumero(),dameTuSueldo(),dameTuPuesto()
    //modificaTuNumero(),modificaTuSueldo() y modificaTuPuesto()
    cout<<"P1"<<endl;P1.muestraTusDatos();cout<<endl;
    cout<<"P2"<<endl;P2.muestraTusDatos();cout<<endl;

    P2.modificaTuGrupos(P1.dameTuGrupos());
    P2.modificaTuCarga(P1.dameTuCarga());
    P2.modificaTuAcademia(P1.dameTuAcademia());

    cout<<"P2"<<endl;P1.muestraTusDatos();cout<<endl;P1.dameTuEstatura();

    return 0;
}
