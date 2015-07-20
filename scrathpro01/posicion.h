#ifndef POSICION_H
#define POSICION_H
#include "gato.h"
#include "sprites.h"
#include <QTextEdit>
#include <QMouseEvent>
#include <QDebug>



class posicion:public sprites
{
private:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=600;

public:
    gato *gat;
    posicion(gato *g, ventanabotones *pantalla);
    tam alto = 30;
    tam ancho = 150;
    tam dato_x;
    tam dato_y;
    void ejecutar();
    QTextEdit *datox;
    QTextEdit *datoy;

    void crearnuevoboton();
};

#endif // POSICION_H
