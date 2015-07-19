#include "mover.h"

mover::mover(gato *g, ventanabotones *pantalla)
{
        gat = g;
        pant = pantalla;
        this->setPixmap(QPixmap(":/mover.png"));
        this->setGeometry(x,y,ancho,alto);
        datos = new QTextEdit(this);
        datos->setGeometry(57,1,30,25);
        this->setParent(pantalla);
}


void mover::mouseDoubleClickEvent( QMouseEvent * event )
{
    if ( event->button() == Qt::LeftButton)
    {
        qDebug() << "imprimir\n"<<event->x()<<","<<event->y()<<"\n";
        ingre_datos = datos->toPlainText().toInt();

        gat->set_posx(gat->get_posx()+ingre_datos);
        gat->set_posy(gat->get_posy());

        gat->mover_gato(gat->get_posx(),gat->get_posy());

    }
}

void mover::crearnuevoboton()
{
    mover *mov = new mover(gat,pant);
    mov->show();
    pant->addboton(mov);
}
