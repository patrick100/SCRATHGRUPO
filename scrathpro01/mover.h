#ifndef MOVER_H
#define MOVER_H
#include "gato.h"
#include "sprites.h"
#include <QTextEdit>
#include <QMouseEvent>
#include <QDebug>

class mover:public sprites
{
private:


public:
    mover(gato *g, ventanabotones *pantalla);
    tam x=0;
    tam y=10;
    gato *gat;
    void crearnuevoboton();
    //multithreading
    void ejecutar();

    tam alto = 30;
    tam ancho = 140;
    tam ingre_datos;
    QTextEdit *datos;


};

#endif // MOVER_H
