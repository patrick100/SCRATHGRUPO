#include "lapiz.h"

lapiz::lapiz(gato *g, punto *punt,ventanabotones *pantalla)
{
    ID = 'l';
    player = g;
    pant = pantalla;
    puntto = punt;

    this->setPixmap(QPixmap(":/lapiz.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pantalla);
}



void lapiz::crearnuevoboton()
{
    lapiz *pencil = new lapiz(player,puntto,pant);
    pencil->show();
    pant->addboton(pencil);
}


void lapiz::ejecutar()
{
   puntto->printpoint();

}
