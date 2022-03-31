#include <iostream>
#include <stdlib.h>
using namespace std;

//Aqui va la clase Rectangulo

int main(void){
    //Pruebas para constructores
    Rectangulo R1, R2(-2,4), R3(2,-4), R4(-2,-4),
            R5(2,0), R6(0,4), R7(0,0), R8(2,4);

    cout<<"R1";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;

    cout<<"R2(-2,4)";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;

    cout<<"R3(2,-4)";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;

    cout<<"R4(-2,-4)";cout<<endl;
    R4.muestraTusDatos();
    cout<<endl;

    cout<<"R5(2,0)";cout<<endl;
    R5.muestraTusDatos();
    cout<<endl;

    cout<<"R6(0,4)";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;

    cout<<"R7(0,0)";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;

    cout<<"R8(2,4)";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para pideleAlUsuarioTusDatos()
    cout<<"R1 (Ingresa -2 y 4)";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;
    R1.pideleAlUsuarioTusDatos();
    cout<<"R1";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"R2 (Ingresa 2 y -4)";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;
    R2.pideleAlUsuarioTusDatos();
    cout<<"R2";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"R3 (Ingresa -2 y -4)";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;
    R3.pideleAlUsuarioTusDatos();
    cout<<"R3";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"R4 (Ingresa 2 y 0)";cout<<endl;
    R4.muestraTusDatos();
    cout<<endl;
    R4.pideleAlUsuarioTusDatos();
    cout<<"R4";cout<<endl;
    R4.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"R5 (Ingresa 0 y 4)";cout<<endl;
    R5.muestraTusDatos();
    cout<<endl;
    R5.pideleAlUsuarioTusDatos();
    cout<<"R5";cout<<endl;
    R5.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"R6 (Ingresa 0 y 0)";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;
    R6.pideleAlUsuarioTusDatos();
    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"R7 (Ingresa 2 y 4)";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;
    R7.pideleAlUsuarioTusDatos();
    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para dameTuBase(), dameTuAltura()
    //dameTuArea() y dameTuPerimetro()
    cout<<"Pruebas para metodos con retorno de R7."<<endl;

    cout<<R7.dameTuBase()<<endl
        <<R7.dameTuAltura()<<endl
        <<R7.dameTuArea()<<endl
        <<R7.dameTuPerimetro()<<endl
    ;
    system("pause");
    system("cls");

    //Pruebas para modificaTusDatos
    cout<<"Prueba para modificaTusDatos(-2,4)"<<endl;
    cout<<"R1";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;

    R1.modificaTusDatos(-2,4);

    cout<<"R1";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTusDatos(2,-4)"<<endl;
    cout<<"R1";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;

    R1.modificaTusDatos(2,-4);

    cout<<"R1";cout<<endl;
    R1.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTusDatos(-2,-4)"<<endl;
    cout<<"R2";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;

    R2.modificaTusDatos(-2,-4);

    cout<<"R2";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTusDatos(2,0)"<<endl;
    cout<<"R2";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;

    R2.modificaTusDatos(2,0);

    cout<<"R2";cout<<endl;
    R2.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTusDatos(0,4)"<<endl;
    cout<<"R3";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;

    R3.modificaTusDatos(0,4);

    cout<<"R3";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTusDatos(0,0)"<<endl;
    cout<<"R3";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;

    R3.modificaTusDatos(0,0);

    cout<<"R3";cout<<endl;
    R3.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTusDatos(2,4)"<<endl;
    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;

    R6.modificaTusDatos(2,4);

    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");


    //Pruebas para modificaTuBase() y/o modificaTuAltura()
    cout<<"Prueba para modificaTuBase() con -2 (altura no tiene 0)"<<endl;
    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;

    R6.modificaTuBase(-2);

    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuAltura() con -4 (base no tiene 0)"<<endl;
    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;

    R7.modificaTuAltura(-4);

    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuBase() con 2 (altura ya tiene 0)"<<endl;
    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;

    R6.modificaTuBase(2);

    cout<<"R6";cout<<endl;
    R6.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuAltura() con 4 (base ya tiene 0)"<<endl;
    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;

    R7.modificaTuAltura(4);

    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuBase() con 3 (altura no tiene 0)"<<endl;
    cout<<"R8";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;

    R8.modificaTuBase(3);

    cout<<"R8";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuAltura() con 5 (base no tiene 0)"<<endl;
    cout<<"R8";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;

    R8.modificaTuAltura(5);

    cout<<"R8";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuBase() con 0 (altura no tiene 0)"<<endl;
    R7.modificaTusDatos(3,5);
    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;

    R7.modificaTuBase(0);

    cout<<"R7";cout<<endl;
    R7.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuAltura() con 0 (base no tiene 0)"<<endl;
    cout<<"R8";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;

    R8.modificaTuAltura(0);

    cout<<"R8";cout<<endl;
    R8.muestraTusDatos();
    cout<<endl;

    return 0;
}



int main(void){
    //Pruebas para constructores
    Circulo C1, C2(-1), C3(0), C4(1);

    cout<<"C1";cout<<endl;
    C1.muestraTusDatos();
    cout<<endl;

    cout<<"C2";cout<<endl;
    C2.muestraTusDatos();
    cout<<endl;

    cout<<"C3";cout<<endl;
    C3.muestraTusDatos();
    cout<<endl;

    cout<<"C4";cout<<endl;
    C4.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para pideleAlUsuarioTusDatos()
    cout<<"C1 (Ingresa -1)";cout<<endl;
    C1.muestraTusDatos();
    cout<<endl;
    C1.pideleAlUsuarioTusDatos();
    cout<<"C1";cout<<endl;
    C1.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"C2 (Ingresa 0)";cout<<endl;
    C2.muestraTusDatos();
    cout<<endl;
    C2.pideleAlUsuarioTusDatos();
    cout<<"C2";cout<<endl;
    C2.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"C3 (Ingresa 1)";cout<<endl;
    C3.muestraTusDatos();
    cout<<endl;
    C3.pideleAlUsuarioTusDatos();
    cout<<"C3";cout<<endl;
    C3.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    //Pruebas para dameTuRadio(), dameTuDiametro()
    //dameTuArea() y dameTuPerimetro()
    cout<<"Pruebas para metodos con retorno."<<endl;

    cout<<C1.dameTuRadio()<<endl
        <<C1.dameTuDiametro()<<endl
        <<C1.dameTuArea()<<endl
        <<C1.dameTuPerimetro()<<endl
    ;
    system("pause");
    system("cls");

    //Pruebas para modificaTuRadio()
    cout<<"Prueba para modificaTuRadio() con -1"<<endl;
    cout<<"C4";cout<<endl;
    C4.muestraTusDatos();
    cout<<endl;

    C4.modificaTuRadio(-1);

    cout<<"C4";cout<<endl;
    C4.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuRadio() con 0"<<endl;
    cout<<"C3";cout<<endl;
    C3.muestraTusDatos();
    cout<<endl;

    C3.modificaTuRadio(0);

    cout<<"C3";cout<<endl;
    C3.muestraTusDatos();
    cout<<endl;
    system("pause");
    system("cls");

    cout<<"Prueba para modificaTuRadio() con 1"<<endl;
    cout<<"C1";cout<<endl;
    C1.muestraTusDatos();
    cout<<endl;

    C1.modificaTuRadio(1);

    cout<<"C1";cout<<endl;
    C1.muestraTusDatos();
    cout<<endl;

    return 0;
}
