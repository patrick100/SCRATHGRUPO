#include "punto.h"

punto::punto(gato *g, QWidget *pantalla)
{
    player = g;
    pant = pantalla;

    this->setPixmap(QPixmap(":/punto.png"));
    this->setGeometry(player->get_posx(),player->get_posy(),ancho,alto);
    this->setParent(pantalla);
}


void punto::printpoint()
{
   /*if(player->giro!=0)
   {
       while(j!=player->xgenerado)
       {
         punto *punt = new punto(pant);
         punt->setGeometry(player->get_posx(),player->get_posy(),ancho,alto);
         punt->show();
         x += ancho;
         y += alto;
         j += ancho;

       }
    }*/

   x = player->get_posx();
   y = player->get_posy();

   tam i =0;

   if (player->pincelabajo == true)
   {
       while(i!=player->datomover)
       {

         punto *punt = new punto(player,pant);
         punt->setGeometry(x,y,ancho,alto);
         punt->show();
         x += ancho;
         i += ancho;
       }
   }
}
