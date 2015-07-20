#include "controlhijo.h"

controlhijo::controlhijo(ventanabotones *pantalla)
{
    pant = pantalla;

    this->setPixmap(QPixmap(":/end.png"));
    this->setGeometry(x1,y1,170,30);
    this->setParent(pant);

}

void controlhijo::crearnuevoboton()
{
    controlhijo *obj = new controlhijo (pant);
    obj->show();
    pant->addboton(obj);
}
