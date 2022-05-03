#include <iostream>
#include <stdlib.h>
#include "Secretaria.h"
using namespace std;

int main(void){
    Fecha F1(7,8,1987),F2(2,4,2006);
    Hora H1(6,5,4),H2(4,2,0);
    Evento E(F2,H2);

    //Pruebas para constructores y muestraTusDatos()
    Secretaria A;
    Secretaria B("Erika","Rodriguez","Gomez","F",1.67,E,2,4000,"Secretaria Ejecutiva",1,75,"Pitman");
    Secretaria C("Renata","Hernandez","Martinez","Femenino",1.76,F1,H1,3,5000,"Secretaria Gerencial",3,75.5,"Garriga");
    Secretaria D("Juan","Perez","Lopez","Masculino",1.67,5,6,1789,10,11,12,4,3900,"Secretario Particular",1,76,"Gregg");
    Secretaria G("Gabriel","Mendez","Anaya","M",1.72,9,8,1654,3,2,1,5,6543.21,"Secretario",2,76.5,"Larralde");

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


    //Pruebas para dameTuNumero(), dameTuSueldo(), dameTuPuesto()
    //modificaTuNumero(), modificaTuSueldo(),
    //y modificaTuPuesto()
    cout<<"G"<<endl;G.muestraTusDatos();cout<<endl;
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;
    G.modificaTuNumero(A.dameTuNumero());
    G.modificaTuSueldo(A.dameTuSueldo());
    G.modificaTuPuesto(A.dameTuPuesto());
    cout<<"G"<<endl;G.muestraTusDatos();cout<<endl;
    system("pause");
    system("cls");


    //Pruebas de dameTuJefes(),dameTuPalabrasPorMinuto(),dameTuTaquigrafia()
    //modificaTuJefes(),modificaTuPalabrasPorMinuto() y modificaTuTaquigrafia()
    cout<<"G"<<endl;G.muestraTusDatos();cout<<endl;
    cout<<"A"<<endl;A.muestraTusDatos();cout<<endl;

    G.modificaTuJefes(A.dameTuJefes());
    G.modificaTuPalabrasPorMinuto(A.dameTuPalabrasPorMinuto());
    G.modificaTuTaquigrafia(A.dameTuTaquigrafia());

    cout<<"G"<<endl;G.muestraTusDatos();cout<<endl;

    return 0;
}
