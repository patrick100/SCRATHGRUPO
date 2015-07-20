#include "punto.h"

punto::punto(gato *g,QWidget *pantalla)
{
    gat = g;
    pant = pantalla;

    this->setPixmap(QPixmap(":/punto.png"));
    this->setGeometry(gat->get_posx(),gat->get_posy(),ancho,alto);
    this->setParent(pantalla);
}


void punto::printpoint(tam longitud)
{
   tam i =0;
   x = gat->get_posx();
   y = gat->get_posy();

   while(i!=longitud)
   {
     punto *punt = new punto(gat,pant);
     punt->setGeometry(x,y,ancho,alto);
     punt->show();
     x += ancho;
     i += ancho;

   }
}
