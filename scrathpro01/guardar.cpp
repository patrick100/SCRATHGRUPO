#include "guardar.h"

guardar::guardar(QWidget *pantalla_gato)
{
    this->setPixmap(QPixmap(":/guardar.png"));
    this->setGeometry(700,600,60,60);
    this->setParent(pantalla_gato);
    this->show();
}

void guardar::mouseDoubleClickEvent(QMouseEvent *event)
{
    this->setGeometry(700,570,60,60);
    this->show();
}





