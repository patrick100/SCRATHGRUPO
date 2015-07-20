#ifndef GATO_H
#define GATO_H
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QWidget>
#include "sprites.h"



class gato:public QLabel//:public sprites
{

public:

    gato(QWidget *pantalla);

    tam posx;
    tam posy;

    tam giro;

    tam gradox=0;
    tam gradoy=0;

    tam get_posx();
    tam get_posy();


    bool rotacionactivada;
    void set_posy(tam);
    void set_posx(tam);
    void mover_gato(tam a,tam b);
    void creandogrados();

private:
    //DONDE SE VA HA INICIAR X ,Y

};




#endif // GATO_H
