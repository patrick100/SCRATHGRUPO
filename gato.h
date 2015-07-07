#ifndef GATO_H
#define GATO_H
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QWidget>
#include "sprites.h"



class gato:public sprites{

public:

    gato();
    tam get_posx();
    tam get_posy();

    void set_posy(tam);
    void set_posx(tam);

    void mover_gato(tam a,tam b);

private:
    //DONDE SE VA HA INICIAR X ,Y
    tam pos_x;
    tam pos_y;
};






#endif // GATO_H
