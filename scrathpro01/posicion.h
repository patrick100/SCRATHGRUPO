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

protected:
    gato *gat;
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=600;

public:
    posicion(gato *g, ventanabotones *pantalla);
    void mouseDoubleClickEvent(QMouseEvent * e );
    tam alto = 30;
    tam ancho = 150;
    tam dato_x;
    tam dato_y;

    QTextEdit *datox;
    QTextEdit *datoy;

    void crearnuevoboton();
};

#endif // POSICION_H
