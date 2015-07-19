#include "bajarlapiz.h"


bajarlapiz::bajarlapiz(gato *g, ventanabotones *pantalla)
{
    gat = g;

    //punt = new punto();
    //punt = p;

    this->setPixmap(QPixmap(":/lapiz.png"));
    this->setGeometry(0,500,70,30);
    this->setParent(pantalla);

}

void bajarlapiz::crearnuevoboton()
{

}

void bajarlapiz::mouseDoubleClickEvent(QMouseEvent *event)
{
    if ( event->button() == Qt::LeftButton)
    {
        qDebug() << "imprimir\n"<<event->x()<<","<<event->y()<<"\n";

        gat->set_posx(gat->get_posx()+50);
        gat->set_posy(gat->get_posy());

        gat->mover_gato(gat->get_posx(),gat->get_posy());
        //Creo q se utilia show
    }
}



