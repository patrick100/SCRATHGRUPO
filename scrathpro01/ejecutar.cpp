#include "ejecutar.h"

ejecutar::ejecutar(gato *gat, ventanabotones *pantalla)
{
    player = gat;
    pant = pantalla;

    this->setPixmap(QPixmap("/:ejecutar.png"));
    this->setGeometry(0,470,60,60);

}

void ejecutar::crearnuevoboton()
{

}

void ejecutar::ejecutar()
{

}

