#include "lapiz.h"

lapiz::lapiz(gato *g,ventanabotones *pantalla)
{
    ID = 'l';
    name = "lapiz";
    player = g;
    pant = pantalla;

    this->setPixmap(QPixmap(":/lapiz.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pantalla);
}



void lapiz::crearnuevoboton()
{
    lapiz *pencil = new lapiz(player,pant);
    pencil->show();
    pant->addboton(pencil);
}



void lapiz::ejecutar()
{
    if (player->pincelabajo ==false)
    {
        player->pincelabajo = true;
    }

    else
    {
        player->pincelabajo = false;
    }
}

QString lapiz::enviardatos()
{

}

void lapiz::abrir(QTextStream &text)
{

}
