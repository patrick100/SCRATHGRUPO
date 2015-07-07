#ifndef GIRARIZQ_H
#define GIRARIZQ_H
#include "gato.h"
#include <QTextEdit>
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include "sprites.h"

class girarizq:public sprites
{
protected:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=150;
    gato *gat;

public:
    girarizq();
    void mouseDoubleClickEvent(QMouseEvent * e );
    tam ingre_datos;
    QTextEdit *datos;
};

#endif // GIRARIZQ_H
