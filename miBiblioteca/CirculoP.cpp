#include "CirculoP.h"

CirculoP::CirculoP(void){
}
CirculoP::CirculoP(Punto C, Punto P){
    CirculoP::C = C;
    CirculoP::P = P;
}
CirculoP::CirculoP(double xC,double yC,double xP,double yP){
    CirculoP::C.modificaTuX(xC);
    CirculoP::C.modificaTuY(yC);
    CirculoP::P.modificaTuX(xP);
    CirculoP::P.modificaTuY(yP);
}
CirculoP::~CirculoP(void){
}
void CirculoP::pideleAlUsuarioTusDatos(void){
    cout<<"Dame mi C"<<endl;
    this->C.pideleAlUsuarioTusDatos();
    cout<<"Dame mi P"<<endl;
    this->P.pideleAlUsuarioTusDatos();
}
void CirculoP::muestraTusDatos(void){
    cout<<"C";
    this->C.muestraTusDatos();
    cout<<"\tP";
    this->P.muestraTusDatos();
    cout<<endl<<"Radio:\t\t"<<this->dameTuRadio()
        <<endl<<"Diametro:\t"<<this->dameTuDiametro()
        <<endl<<"Area:\t\t"<<this->dameTuArea()
        <<endl<<"Perimetro:\t"<<this->dameTuPerimetro();
}
Punto CirculoP::dameTuC(void){
    return this->C;
}
Punto CirculoP::dameTuP(void){
    return this->P;
}
double CirculoP::dameTuRadio(void){
    return distanciaEntre(C,P);
}
double CirculoP::dameTuDiametro(void){
    return 2 * this->dameTuRadio();
}
double CirculoP::dameTuArea(void){
    return M_PI * pow(this->dameTuRadio(), 2);
}
double CirculoP::dameTuPerimetro(void){
    return 2* M_PI * this->dameTuRadio();
}










