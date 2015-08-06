#include "control.h"
//typedef gato* (player)

control::control(gato *g,ventanabotones *pantalla)
{
    player = g;
    pant = pantalla;
    ID = "c";

    this->setPixmap(QPixmap(":/repetir.png"));

    this->setGeometry(x,y,ancho,alto);
    this->setParent(pant);

    datos = new QTextEdit(this);
    datos->setGeometry(tx,ty,tancho,talto);
}


void control::crearnuevoboton()
{
    control *cont = new control(player,pant);
    cont->show();
    pant->addboton(cont);
}



void control::ejecutar()
{

}


