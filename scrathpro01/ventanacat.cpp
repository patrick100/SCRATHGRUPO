#include "ventanacat.h"

ventanacat::ventanacat(QWidget *total,ventanabotones *pantalla)
{
    this->setGeometry(600,0,766,altop);
    this->setStyleSheet("background-color:white;");
    this->setParent(total);
    pant = pantalla;

    gat = new gato(this); //this es la pantallacat
    disco = new guardar(gat,this);
    open = new abrir(gat,disco,this,pant);

}

