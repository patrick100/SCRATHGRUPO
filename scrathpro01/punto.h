#ifndef PUNTO_H
#define PUNTO_H
#include <QLabel>
#include "gato.h"

typedef int (tam);

class punto:public QLabel
{
public:
    punto(gato *gat, QWidget *pantalla);
    gato *gat;
    QWidget *pant;
    tam ancho=5;
    tam alto=5;
    tam x;
    tam y;
    void printpoint(tam longitud);
    void crearlinea();
};

#endif // PUNTO_H
