#include "mover.h"


mover::mover(gato *g, punto *punt,  ventanabotones *pantalla)
{
    ID = 'm';
    puntto = punt;
    player = g;
    pant = pantalla;
    this->setPixmap(QPixmap(":/mover.png"));
    this->setGeometry(x,y,ancho,alto);
    datos = new QTextEdit(this);
    datos->setGeometry(57,1,30,25);
    this->setParent(pantalla);
}


void mover::ejecutar()
{
        ingre_datos = datos->toPlainText().toInt();
        player->datomover = ingre_datos;



        if(player->giro!=0)
        {
            //LO MUEVO 100 LO GIRO 90 LO MUEVO 100
            player->creandogrados();
            player->mover_con_giro(ingre_datos);
        }

        else
        {
        puntto->printpoint();
        player->set_posx(player->get_posx()+ingre_datos);
        player->set_posy(player->get_posy());
        player->mover_gato();


        }

}

void mover::crearnuevoboton()
{
    mover *mov = new mover(player,puntto,pant);
    mov->show();
    pant->addboton(mov);
}
