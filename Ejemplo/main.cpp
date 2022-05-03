#include <iostream>
#include <stdlib.h>
#include "Alumno.h"
using namespace std;

int main(void){
    Fecha F1(7,8,2007),F2(2,4,2006);
    Hora H1(6,5,4),H2(4,2,0);
    Evento E(F2,H2);

    //Pruebas para constructores y muestraTusDatos()
    Alumno A;
    Alumno B("Erika","Rodriguez","Gomez","F",1.67,E,2,8.7,"I.C.E");
    Alumno C("Renata","Hernandez","Martinez","Femenino",1.76,F1,H1,3,9.1,"I.C.A.");
    Alumno D("Juan","Perez","Lopez","Masculino",1.67,5,6,1789,10,11,12,4,7.3,"I.E.");
    Alumno G("Gabriel","Mendez","Anaya","M",1.72,9,8,1654,3,2,1,5,8.1,"I.S.I.S.A.");

    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    cout<<"B"<<endl;B.muestraTusDatos();cout<<endl;
    cout<<"C"<<endl;C.muestraTusDatos();cout<<endl;
    cout<<"D"<<endl;D.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    cout<<"A"<<endl;A.pideleAlUsuarioTusDatos();
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para dameTuNombre(), dameTuPaterno(), dameTuMaterno()
    //dameTuGenero(), dameTuEstatura(), dameTuFechaNacimiento()
    //modificaNombre(), modificaTuPaterno(), modificaTuMaterno()
    //modificaTuGenero(), modificaEstatura(),
    //y modificaTuFechaNacimiento(Evento)
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    cout<<"B"<<endl;B.muestraTusDatos();cout<<endl;
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
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    cout<<"C"<<endl;C.muestraTusDatos();cout<<endl;
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
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    cout<<"D"<<endl;D.muestraTusDatos();cout<<endl;
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
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    A.modificaTuDia(15);
    A.modificaTuMes(9);
    A.modificaTuAnio(1810);
    A.modificaTuHora(2);
    A.modificaTuMinuto(30);
    A.modificaTuSegundo(59);
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para dameTuSemestre(), dameTuPromedio(), dameTuCarrera()
    //modificaTuSemestre(), modificaTuPromedio() y modificaTuCarrera()
    cout<<"G"<<endl;G.muestraTusDatos();cout<<endl;
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    G.modificaTuSemestre(A.dameTuSemestre());
    G.modificaTuPromedio(A.dameTuPromedio());
    G.modificaTuCarrera(A.dameTuCarrera());
    cout<<"F"<<endl;G.muestraTusDatos();cout<<endl;

    return 0;
}
