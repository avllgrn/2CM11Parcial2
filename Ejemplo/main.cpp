#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "CirculoP.h"
using namespace std;

int main(void){
    CirculoP Q(1,2,3,4);

    Q.muestraTusDatos();
    cout<<endl<<endl;

    cout<<"x de C = "<<Q.dameTuC().dameTuX()<<endl;
    cout<<"y de C = "<<Q.dameTuC().dameTuY();
    cout<<endl<<endl;

    cout<<"x de P = "<<Q.dameTuP().dameTuX()<<endl;
    cout<<"y de P = "<<Q.dameTuP().dameTuY();
    cout<<endl<<endl;

    cout<<"("<<Q.dameTuC().dameTuX();
    cout<<", "<<Q.dameTuC().dameTuY();
    cout<<")"<<endl<<endl;

    cout<<"("<<Q.dameTuP().dameTuX();
    cout<<", "<<Q.dameTuP().dameTuY();
    cout<<")"<<endl<<endl;

    Q.dameTuC().muestraTusDatos();
    cout<<endl<<endl;

    Q.dameTuP().muestraTusDatos();
    cout<<endl<<endl;

    return 0;
}
