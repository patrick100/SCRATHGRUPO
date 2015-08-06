#ifndef CONTROLFINAL_H
#define CONTROLFINAL_H
#include "sprites.h"


class controlfinal:public sprites
{
public:
    controlfinal(gato *g, ventanabotones *pantalla);
    tam x= 0;
    tam y= 150;
    tam ancho = 170;
    tam alto = 30;


    void crearnuevoboton();
    void ejecutar();
};

#endif // CONTROLFINAL_H
