#ifndef SPRITES_H
#define SPRITES_H
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>

typedef int (tam);//para todos los hijos


class sprites:public QLabel
{
private:
    tam ejex=0;
    tam ejey=0;

protected://TODO SE HEREDA

    sprites();
    //el tamaño general de los sprites
    tam alto = 40;
    tam ancho = 140;


    void set_ejex(tam);
    void set_ejey(tam);
    tam get_ejex();
    tam get_ejey();

    void mouseMoveEvent(QMouseEvent *e);
    void moversprites(tam a, tam b);
};

#endif // SPRITES_H
