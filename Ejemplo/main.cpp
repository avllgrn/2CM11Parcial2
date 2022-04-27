#include <iostream>
#include <stdlib.h>
#include "Persona.h"
using namespace std;

int main(void){
    Fecha F1(7,8,1987),F2(2,4,2006);
    Hora H1(6,5,4),H2(4,2,0);
    Evento E(F2,H2);

    //Pruebas para constructores y muestraTusDatos()
    Persona A;
    Persona B("Erika","Rodriguez","Gomez","F",1.67,E);
    Persona C("Renata","Hernandez","Martinez","Femenino",1.76,F1,H1);
    Persona D("Juan","Perez","Lopez","Masculino",1.67,5,6,1789,10,11,12);

    cout<<"A"<<endl;A.muestraTusDatos();
    cout<<"B"<<endl;B.muestraTusDatos();
    cout<<"C"<<endl;C.muestraTusDatos();
    cout<<"D"<<endl;D.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    cout<<"A"<<endl;A.muestraTusDatos();
    cout<<"A"<<endl;A.pideleAlUsuarioTusDatos();
    cout<<"A"<<endl;A.muestraTusDatos();
    system("pause");
    system("cls");

    //Pruebas para dameTuNombre(), dameTuPaterno(), dameTuMaterno()
    //dameTuGenero(), dameTuEstatura(), dameTuFechaNacimiento()
    //modificaNombre(), modificaTuPaterno(), modificaTuMaterno()
    //modificaTuGenero(), modificaEstatura(),
    //y modificaTuFechaNacimiento(Evento)
    cout<<"A"<<endl;A.muestraTusDatos();
    cout<<"B"<<endl;B.muestraTusDatos();
    B.modificaTuNombre(A.dameTuNombre());
    B.modificaTuPaterno(A.dameTuPaterno());
    B.modificaTuMaterno(A.dameTuMaterno());
    B.modificaTuGenero(A.dameTuGenero());
    B.modificaTuEstatura(A.dameTuEstatura());
    B.modificaTuFechaNacimiento(A.dameTuFechaNacimiento());
    cout<<"B"<<endl;B.muestraTusDatos();cout<<endl;

    system("pause");
    system("cls");

    //Prueba para modificaTuFechaNacimiento(Fecha, Hora)
    cout<<"A"<<endl;A.muestraTusDatos();
    cout<<"C"<<endl;C.muestraTusDatos();
    C.modificaTuNombre(A.dameTuNombre());
    C.modificaTuPaterno(A.dameTuPaterno());
    C.modificaTuMaterno(A.dameTuMaterno());
    C.modificaTuGenero(A.dameTuGenero());
    C.modificaTuEstatura(A.dameTuEstatura());
    C.modificaTuFechaNacimiento(
        A.dameTuFechaNacimiento().dameTuF(),
        A.dameTuFechaNacimiento().dameTuH()
    );
    cout<<"C"<<endl;C.muestraTusDatos();cout<<endl;

    system("pause");
    system("cls");

    //Prueba para modificaTuFechaNacimiento(int,int,int,int,int,int)
    cout<<"A"<<endl;A.muestraTusDatos();
    cout<<"D"<<endl;D.muestraTusDatos();
    D.modificaTuNombre(A.dameTuNombre());
    D.modificaTuPaterno(A.dameTuPaterno());
    D.modificaTuMaterno(A.dameTuMaterno());
    D.modificaTuGenero(A.dameTuGenero());
    D.modificaTuEstatura(A.dameTuEstatura());
    D.modificaTuFechaNacimiento(
        A.dameTuFechaNacimiento().dameTuF().dameTuDia(),
        A.dameTuFechaNacimiento().dameTuF().dameTuMes(),
        A.dameTuFechaNacimiento().dameTuF().dameTuAnio(),
        A.dameTuFechaNacimiento().dameTuH().dameTuHora(),
        A.dameTuFechaNacimiento().dameTuH().dameTuMinuto(),
        A.dameTuFechaNacimiento().dameTuH().dameTuSegundo()
    );
    cout<<"D"<<endl;D.muestraTusDatos();cout<<endl;

    system("pause");
    system("cls");

    //Prueba para modificaTuDia(), modificaTuMes(), modificaTuAnio(),
    //modificaTuHora(), modificaTuMinuto(), y modificaTuSegundo()
    cout<<"A"<<endl;A.muestraTusDatos();
    A.modificaTuDia(15);
    A.modificaTuMes(9);
    A.modificaTuAnio(1810);
    A.modificaTuHora(2);
    A.modificaTuMinuto(30);
    A.modificaTuSegundo(59);
    cout<<"A"<<endl;A.muestraTusDatos();

    return 0;
}
