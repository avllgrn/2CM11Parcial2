#include <iostream>
#include <math.h>
using namespace std;

//Aqui va la clase Circulo

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
