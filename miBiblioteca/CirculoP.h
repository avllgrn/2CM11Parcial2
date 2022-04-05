#ifndef CIRCULOP_H
#define CIRCULOP_H


#include <iostream>
#include "Punto.h"
using namespace std;

class CirculoP{
private:
    Punto C;
    Punto P;
public:
    CirculoP(void);
    CirculoP(Punto C, Punto P);
    CirculoP(double xC,double yC,double xP,double yP);
    ~CirculoP(void);
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    Punto dameTuC(void);
    Punto dameTuP(void);
    double dameTuRadio(void);
    double dameTuDiametro(void);
    double dameTuArea(void);
    double dameTuPerimetro(void);
};

#endif // CIRCULOP_H
