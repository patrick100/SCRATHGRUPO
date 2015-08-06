#ifndef BOTONEJECUTAR_H
#define BOTONEJECUTAR_H

#include "sprites.h"


class botonejecutar:public sprites
{

public:
    botonejecutar(gato *gat ,ventanabotones *pantalla);

    void crearnuevoboton();
    void ejecutar();
    tam x = 0;
    tam y = 350;
    tam ancho = 170;
    tam alto = 30;


    void virtual ejecutar_solo_click();
};





#endif // BOTONEJECUTAR_H
