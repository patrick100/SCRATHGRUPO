#ifndef GIRARDER_H
#define GIRARDER_H
#include <QTextEdit>
#include "sprites.h"
#include "gato.h"
#include <math.h>
#include <qgraphicsitem.h>

class girarder:public sprites
{
protected:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=60;
    tam girox;
    tam giroy;
public:
    girarder(gato *g, ventanabotones *pantalla);
    void ejecutar();
    gato *gat;
    tam alto = 30;
    tam ancho = 170;
    tam ingre_datos;

    void crearnuevoboton();
    QTextEdit *datos;
};

#endif // GIRARDER_H
