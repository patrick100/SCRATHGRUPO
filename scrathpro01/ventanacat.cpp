#include "ventanacat.h"

ventanacat::ventanacat(QWidget *total)
{
    this->setGeometry(600,0,766,altop);
    this->setStyleSheet("background-color:white;");
    this->setParent(total);
    gat = new gato(this); //this es la pantallacat
    punt = new punto(gat,this);
}

