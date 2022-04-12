#include "Punto3D.h"


void Punto3D::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi x ";
    cin>>this->x;
    cout<<"Dame mi y ";
    cin>>this->y;
    cout<<"Dame mi z ";
    cin>>this->z;
}
void Punto3D::muestraTusDatos(void){
    cout << "(" << this->x
         << ", " << this->y
         << ", " << this->z
         <<")";
}
double Punto3D::dameTuZ(void){
    return this->z;
}
void Punto3D::modificaTuZ(double z){
    this->z = z;
}
void Punto3D::modificaTusDatos(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
}
