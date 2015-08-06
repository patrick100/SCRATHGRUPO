#include "punto.h"
#include "math.h"

punto::punto(gato *g, QWidget *pantalla)
{
    player = g;
    pant = pantalla;

    this->setPixmap(QPixmap(":/punto.png"));
    this->setGeometry(player->get_posx(),player->get_posy(),ancho,alto);
    //this->setParent(pantalla);
}


void punto::printpoint()
{


}



