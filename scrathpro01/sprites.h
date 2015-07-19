#ifndef SPRITES_H
#define SPRITES_H
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include <QPainter>
#include <QDrag>
#include "ventanabotones.h"

typedef int (tam);

class sprites:public QLabel
{
public:
    sprites();
    void set_ejex(tam);
    void set_ejey(tam);
    tam get_ejex();
    tam get_ejey();
    void moversprites(tam a, tam b,tam alt,tam anch);
    void movergato(tam a,tam b);

    tam ejex=0;
    tam ejey=0;



protected://TODO SE HEREDA

    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    tam alto = 40;
    tam ancho = 140;
    ventanabotones *pant;
    virtual void crearnuevoboton(){};


};

#endif // SPRITES_H
