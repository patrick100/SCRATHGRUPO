#include "posicion.h"

posicion::posicion(gato *g, ventanabotones *pantalla)
{
        ID = 'p';
        player = g;
        pant = pantalla;
        this->setPixmap(QPixmap(":/posicion.png"));
        this->setGeometry(x,y,ancho,alto);
        this->setParent(pantalla);

        datox = new QTextEdit(this);
        datox->setGeometry(73,1,27,25);
        datoy = new QTextEdit(this);
        datoy->setGeometry(118,1,27,25);
}


void posicion::ejecutar()
{
        dato_x = datox->toPlainText().toInt();
        dato_y = datoy->toPlainText().toInt();
        player->set_posx(dato_x);
        player->set_posy(dato_y);
        player->mover_gato();
}



void posicion::crearnuevoboton()
{
        posicion *obj;
        obj = new posicion(player,pant);
        obj->show();
        pant->addboton(obj);

}
