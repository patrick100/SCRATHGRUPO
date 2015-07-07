#ifndef MOVER_H
#define MOVER_H
#include "gato.h"

#include <QTextEdit>
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>

class mover:public QLabel
{
private:

protected:
    gato *gat;
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
