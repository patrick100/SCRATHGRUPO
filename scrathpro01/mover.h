#ifndef MOVER_H
#define MOVER_H
#include "sprites.h"


class mover:public sprites
{
private:


public:
    mover(gato *g, ventanabotones *pantalla);
    tam x=0;
    tam y=10;

    QTextEdit *datos;
    void crearnuevoboton();
    //multithreading
    void ejecutar();

    QString virtual enviardatos();
    virtual void abrir(QTextStream & text);


    tam alto = 30;
    tam ancho = 140;
    tam ingre_datos;

    tam tx =57;
    tam ty = 1;
    tam tancho = 30;
    tam talto = 25;



};

#endif // MOVER_H
