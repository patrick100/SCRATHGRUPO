#ifndef PUNTO_H
#define PUNTO_H
#include <QLabel>
#include "gato.h"

typedef int (tam);

class punto:public QLabel
{
public:
    punto(gato *g , QWidget *pantalla);
    gato *player;
    QWidget *pant;
    tam ancho=5;
    tam alto=5;
    tam x;
    tam y;
    void printpoint();
    void crearlinea();
};

#endif // PUNTO_H
