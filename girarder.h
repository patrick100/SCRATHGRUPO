#ifndef GIRARDER_H
#define GIRARDER_H
#include "gato.h"
#include <QTextEdit>
#include <QLabel>




class girarder:public QLabel
{
protected:
    tam x=0;
    tam y=60;
public:
    girarder();
    tam alto = 40;
    tam ancho = 140;
    tam ingre_datos;
    QTextEdit *datos;
};

#endif // GIRARDER_H
