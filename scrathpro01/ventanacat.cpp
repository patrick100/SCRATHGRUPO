#include "ventanacat.h"

ventanacat::ventanacat(QWidget *total)
{
    this->setGeometry(600,0,766,altop);
    this->setStyleSheet("background-color:#FFFFFF;");
    this->setParent(total);
    gat = new gato(this);
}

