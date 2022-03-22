#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

class Punto{
private:
    double x;
    double y;
public:
    Punto(void);
    Punto(double x, double y);
    ~Punto(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    void guardaTusDatos(ofstream& ASalida);
    void cargaTusDatos(ifstream& AEntrada);
    double dameTuX(void);
    void modificaTuX(double x);
    double dameTuY(void);
    void modificaTuY(double y);
    void modificaTusDatos(double x, double y);
};

Punto::Punto(void){
    Punto::x = 0.0;
    Punto::y = 0.0;
    //cout << "Objeto construido, this -> " << this << endl;
}
Punto::Punto(double x, double y){
    Punto::x = x;
    Punto::y = y;
    //cout << "Objeto construido, this -> " << this << endl;
}
Punto::~Punto(void){
    //cout << "Objeto destruido, this -> " << this << endl;
}
void Punto::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi x ";
    cin>>this->x;
    cout<<"Dame mi y ";
    cin>>this->y;
}
void Punto::muestraTusDatos(void){
    cout << "(" << this->x << ", " << this->y <<")";
}
void Punto::guardaTusDatos(ofstream& ASalida) {
    ASalida << "(" << this->x
            << ", " << this->y
            << ")" << endl;
}
void Punto::cargaTusDatos(ifstream& AEntrada) {
    char caracter;
    AEntrada >> caracter;
    AEntrada >> this->x;
    AEntrada >> caracter;
    AEntrada >> this->y;
    AEntrada >> caracter;
}
double Punto::dameTuX(void){
    return this->x;
}
void Punto::modificaTuX(double x){
    this->x = x;
}
double Punto::dameTuY(void){
    return this->y;
}
void Punto::modificaTuY(double y){
    this->y = y;
}
void Punto::modificaTusDatos(double x, double y){
    this->x = x;
    this->y = y;
}



int main(void){
    //Codifica un programa que sume dos puntos en un plano cartesiano

    Punto A, B, C;

    cout<<endl<<"Ingresa las coordenadas de A"<<endl;
    A.pideleAlUsuarioTusDatos();

    cout<<endl<<"Ingresa las coordenadas de B"<<endl;
    B.pideleAlUsuarioTusDatos();

    C.modificaTuX( A.dameTuX() + B.dameTuX() );
    C.modificaTuY( A.dameTuY() + B.dameTuY() );

    cout<<endl<<"  A";
    A.muestraTusDatos();
    cout<<endl<<"+ B";
    B.muestraTusDatos();
    cout<<endl<<"= C";
    C.muestraTusDatos();

    return 0;
}
