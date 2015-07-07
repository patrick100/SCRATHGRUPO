#ifndef GIRARDER_H
#define GIRARDER_H
#include "gato.h"
#include <QTextEdit>
#include <QLabel>
#include "sprites.h"

class girarder:public sprites
{
protected:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=60;
public:
    girarder();
    void mouseDoubleClickEvent(QMouseEvent * e );
    tam alto = 40;
    tam ancho = 140;
    tam ingre_datos;
    QTextEdit *datos;
};

#endif // GIRARDER_H
