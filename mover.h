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

protected:
    gato *gat;
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=10;
public:
    mover(gato *g);
    void mouseDoubleClickEvent(QMouseEvent * e );
    tam alto = 40;
    tam ancho = 140;
    tam ingre_datos;
    QTextEdit *datos;
};

#endif // MOVER_H
