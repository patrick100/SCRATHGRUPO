#ifndef CONTROL_H
#define CONTROL_H
#include <QLabel>
#include "sprites.h"
#include <QTextEdit>
#include "gato.h"


class control:public sprites
{
public:
    control(gato *g,ventanabotones *pantalla);

    gato *gat;
    tam ingre_datos;
    QTextEdit *datos;

    //Coordenadas del label repetir
    tam x=0;
    tam y=100;

    tam alto = 30;
    tam ancho = 170;

    void crearnuevoboton();
    //multithreading
    void ejecutar();
};

#endif // CONTROL_H
