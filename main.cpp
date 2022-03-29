#include <iostream>
#include <stdlib.h>
using namespace std;

class Fraccion{
private:
    int numerador;
    int denominador;
    void verificaDatos(void);
public:
    Fraccion(void);
    Fraccion(int numerador, int denominador);
    ~Fraccion(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    int dameTuNumerador(void);
    void modificaTuNumerador(int numerador);
    int dameTuDenominador(void);
    void modificaTuDenominador(int denominador);
    void modificaTusDatos(int numerador, int denominador);
};

Fraccion suma(Fraccion A, Fraccion B);
Fraccion resta(Fraccion A, Fraccion B);
Fraccion multiplica(Fraccion A, Fraccion B);
Fraccion divide(Fraccion A, Fraccion B);

void Fraccion::verificaDatos(void){
    if(this->denominador < 0){
         this->denominador *= -1;
         this->numerador *= -1;
    }
    if(this->denominador == 0){
        cout<<"Error! Fraccion indeterminada... =("<<endl<<endl;
        exit(-1);
    }
}
Fraccion::Fraccion(void){
    Fraccion::numerador = 0;
    Fraccion::denominador = 1;
}
Fraccion::Fraccion(int numerador, int denominador){
    Fraccion::numerador = numerador;
    Fraccion::denominador = denominador;
    Fraccion::verificaDatos();
}
Fraccion::~Fraccion(void){
}
void Fraccion::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi numerador ";
    cin>>this->numerador;
    cout<<"Dame mi denominador ";
    cin>>this->denominador;
    this->verificaDatos();
}
void Fraccion::muestraTusDatos(void){
    cout<<this->numerador<<"/"<<this->denominador;
}
int Fraccion::dameTuNumerador(void){
    return this->numerador;
}
void Fraccion::modificaTuNumerador(int numerador){
    this->numerador = numerador;
}
int Fraccion::dameTuDenominador(void){
    return this->denominador;
}
void Fraccion::modificaTuDenominador(int denominador){
    this->denominador = denominador;
    this->verificaDatos();
}
void Fraccion::modificaTusDatos(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;
    this->verificaDatos();
}



Fraccion suma(Fraccion A, Fraccion B){
    Fraccion C;
    C.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuDenominador()
        +
        B.dameTuNumerador()*A.dameTuDenominador()
    );
    C.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuDenominador()
    );
    return C;
}
Fraccion resta(Fraccion A, Fraccion B){
    Fraccion D;
    D.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuDenominador()
        -
        B.dameTuNumerador()*A.dameTuDenominador()
    );
    D.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuDenominador()
    );
    return D;
}
Fraccion multiplica(Fraccion A, Fraccion B){
    Fraccion E;
    E.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuNumerador()
    );
    E.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuDenominador()
    );
    return E;
}
Fraccion divide(Fraccion A, Fraccion B){
    Fraccion F;
    F.modificaTuNumerador(
        A.dameTuNumerador()*B.dameTuDenominador()
    );
    F.modificaTuDenominador(
        A.dameTuDenominador()*B.dameTuNumerador()
    );
    return F;
}

int main(void){
    Fraccion A[5][5], B[5][5], C[5][5], D[5][5];
    int m,n,i,j;

    //1. Pide dato(s)
    cout<<"Ingresa m ";cin>>m;
    cout<<"Ingresa n ";cin>>n;

    cout<<endl<<"Ingresa A"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Imgresa A["<<i<<"]["<<j<<"]"<<endl;
            A[i][j].pideleAlUsuarioTusDatos();
        }
    }

    cout<<endl<<"Ingresa B"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"Imgresa A["<<i<<"]["<<j<<"]"<<endl;
            B[i][j].pideleAlUsuarioTusDatos();
        }
    }

    //2. Calcula
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            C[i][j] = suma(A[i][j], B[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            D[i][j] = resta(A[i][j], B[i][j]);
        }
    }

    //3.Muestra resultado(s)
    cout<<endl<<"A"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            A[i][j].muestraTusDatos();cout<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<"B"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            B[i][j].muestraTusDatos();cout<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<"C"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            C[i][j].muestraTusDatos();cout<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<"D"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            D[i][j].muestraTusDatos();cout<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
