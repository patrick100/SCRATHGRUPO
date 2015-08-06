#include "botonejecutar.h"




botonejecutar::botonejecutar(gato *gat, ventanabotones *pantalla)
{
    primero = nullptr;
    player = gat;
    pant = pantalla;
    ID = "e";
    name = "ejecutar";

    this->setPixmap(QPixmap(":/ejecutar3.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pantalla);

}

void botonejecutar::crearnuevoboton()
{
    botonejecutar *ejecution = new botonejecutar(player,pant);
    ejecution->show();
    pant->addboton(ejecution);
}


void botonejecutar::ejecutar()
{

}



void botonejecutar::ejecutar_solo_click()
{
    std::vector<sprites*>::iterator it;

    for(it=player->botones_activos.begin();it!=player->botones_activos.end();it++)
    {
           ejecutar_alternativo(*it);
    }

    //std::vector<sprites*>::iterator ite;
}


