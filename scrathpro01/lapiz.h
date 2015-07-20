#ifndef LAPIZ_H
#define LAPIZ_H
#include "gato.h"
#include "sprites.h"
#include <QTextEdit>
#include <QMouseEvent>
#include "sprites.h"
#include "punto.h"

class lapiz:public sprites
{
public:
    lapiz(gato *gat, punto *punt ,ventanabotones *pantalla);
    tam x=0;
    tam y=400;
    punto *puntto;
    gato *gat;

    void crearnuevoboton();

    //multithreading
    void ejecutar();

    tam alto = 30;
    tam ancho = 70;

};

#endif // LAPIZ_H
