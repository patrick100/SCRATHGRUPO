#ifndef BOTONEJECUTAR_H
#define BOTONEJECUTAR_H

#include "sprites.h"

class botonejecutar:public sprites
{

public:
    botonejecutar(gato *gat ,ventanabotones *pantalla);
    void crearnuevoboton();
    void ejecutar();


};





#endif // BOTONEJECUTAR_H
