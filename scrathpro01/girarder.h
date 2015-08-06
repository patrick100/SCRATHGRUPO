#ifndef GIRARDER_H
#define GIRARDER_H
#include "sprites.h"
#include "ventanabotones.h"

class girarder:public sprites
{
protected:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=60;
    tam girox;
    tam giroy;

    tam tx=71;
    tam ty=1;
    tam tancho=30;
    tam talto=25;
    QTextEdit *datos;

public:
    girarder(gato *g, ventanabotones *pantalla);
    //multithreading
    //ventanabotones *pant;
    void ejecutar();
    void rotarplayer(tam grados);

    QString virtual enviardatos();
    virtual void abrir(QTextStream & text);


    tam alto = 30;
    tam ancho = 170;
    tam ingre_datos;

    void crearnuevoboton();
};

#endif // GIRARDER_H
