#include "lapiz.h"

lapiz::lapiz(gato *g, punto *punt,ventanabotones *pantalla)
{
    gat = g;
    pant = pantalla;
    puntto = punt;

    this->setPixmap(QPixmap(":/lapiz.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pantalla);
}



void lapiz::crearnuevoboton()
{
    lapiz *pencil = new lapiz(gat,puntto,pant);
    pencil->show();
    pant->addboton(pencil);
}

void lapiz::ejecutar()
{
   tam temp = 100 ;
   puntto->printpoint(temp);


   gat->set_posx(gat->get_posx()+temp);
   gat->set_posy(gat->get_posy());
   gat->mover_gato(gat->get_posx(),gat->get_posy());
}
