#ifndef POSICION_H
#define POSICION_H
#include "sprites.h"



class posicion:public sprites
{
private:
    //DONDE SE VA HA INICIAR X ,Y
    tam x=0;
    tam y=600;

public:
    posicion(gato *g, ventanabotones *pantalla);
    tam alto = 30;
    tam ancho = 150;
    tam dato_x;
    tam dato_y;

    tam t1x = 73;
    tam t1y = 1;
    tam t1ancho =25;
    tam t1alto = 25;

    tam t2x = 118;
    tam t2y = 1;
    tam t2ancho = 27;
    tam t2alto =25;


    QString virtual enviardatos();
    virtual void abrir(QTextStream & text);

    void ejecutar();
    QTextEdit *datox;
    QTextEdit *datoy;
    QTextEdit *datos;

    void crearnuevoboton();
};

#endif // POSICION_H
