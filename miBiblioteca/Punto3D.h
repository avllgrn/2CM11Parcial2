#ifndef PUNTO3D_H
#define PUNTO3D_H

#include "Punto.h"
class Punto3D : Punto{
private:
    double z;
public:
    void pideleAlUsuarioTusDatos(void);
    void muestraTusDatos(void);
    double dameTuZ(void);
    void modificaTuZ(double z);
    void modificaTusDatos(double x, double y, double z);
};

#endif // PUNTO3D_H
