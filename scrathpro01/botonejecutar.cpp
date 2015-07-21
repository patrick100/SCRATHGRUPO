#include "botonejecutar.h"

botonejecutar::botonejecutar(gato *gat, ventanabotones *pantalla)
{

    player = gat;
    pant = pantalla;
    ID = 'e';

    this->setPixmap(QPixmap(":/ejecutar3.png"));
    this->setGeometry(0,350,170,30);
    this->setParent(pantalla);

}

void botonejecutar::crearnuevoboton()
{

}

void botonejecutar::ejecutar()
{

}
