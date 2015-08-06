#ifndef CONTROL_H
#define CONTROL_H
#include "sprites.h"


class control:public sprites
{
public:
    control(gato *g,ventanabotones *pantalla);
    tam ingre_datos;

    //Coordenadas del label repetir
    tam x=0;
    tam y=100;
    QTextEdit *datos;

    tam alto = 30;
    tam ancho = 170;

    tam tx =100;
    tam ty = 2;
    tam tancho = 48;
    tam talto = 25;




    void crearnuevoboton();
    //multithreading
    void ejecutar();
};

#endif // CONTROL_H
