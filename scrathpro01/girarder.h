#ifndef GIRARDER_H
#define GIRARDER_H
#include "sprites.h"

class girarder:public sprites
{
protected:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=60;
    tam girox;
    tam giroy;
public:
    girarder(gato *g, ventanabotones *pantalla);
    //multithreading
    void ejecutar();
    void rotarplayer(tam grados);
    tam alto = 30;
    tam ancho = 170;
    tam ingre_datos;

    void crearnuevoboton();
    QTextEdit *datos;
};

#endif // GIRARDER_H
