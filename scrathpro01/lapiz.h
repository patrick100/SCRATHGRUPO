#ifndef LAPIZ_H
#define LAPIZ_H
#include "sprites.h"
#include "punto.h"

class lapiz:public sprites
{
public:
    lapiz(gato *gat, ventanabotones *pantalla);
    tam x=0;
    tam y=400;

    void crearnuevoboton();

    //multithreading
    void ejecutar();
    QString virtual enviardatos();
    virtual void abrir(QTextStream & text);

    tam alto = 30;
    tam ancho = 70;

};

#endif // LAPIZ_H
