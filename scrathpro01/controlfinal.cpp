#include "controlfinal.h"

controlfinal::controlfinal(gato *g,ventanabotones *pantalla)
{
    player = g;
    pant = pantalla;
    this->setPixmap(QPixmap(":/end.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pant);
}

void controlfinal::crearnuevoboton()
{
    controlfinal *obj = new controlfinal(player,pant);
    obj->show();
    pant->addboton(obj);

}

void controlfinal::ejecutar()
{

}
