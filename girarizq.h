#ifndef GIRARIZQ_H
#define GIRARIZQ_H
#include "gato.h"
#include <QTextEdit>
#include <QLabel>


class girarizq:public QLabel
{
protected:
    tam x=0;
    tam y=150;
public:
    girarizq();
    //void mouseDoubleClickEvent(QMouseEvent * e , gato *cat);
    tam alto = 40;
    tam ancho = 140;
    tam ingre_datos;
    QTextEdit *datos;
};

#endif // GIRARIZQ_H
