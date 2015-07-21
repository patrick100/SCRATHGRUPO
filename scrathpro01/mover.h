#ifndef MOVER_H
#define MOVER_H
#include "sprites.h"
#include "punto.h"

class mover:public sprites
{
private:


public:
    mover(gato *g,punto *punt, ventanabotones *pantalla);
    tam x=0;
    tam y=10;
    punto *puntto;
    void crearnuevoboton();
    //multithreading
    void ejecutar();

    tam alto = 30;
    tam ancho = 140;
    tam ingre_datos;
    QTextEdit *datos;


};

#endif // MOVER_H
