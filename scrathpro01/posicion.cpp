#include "posicion.h"

posicion::posicion(gato *g, ventanabotones *pantalla)
{
        gat = g;
        pant = pantalla;
        this->setPixmap(QPixmap(":/posicion.png"));
        this->setGeometry(x,y,ancho,alto);
        this->setParent(pantalla);

        datox = new QTextEdit(this);
        datox->setGeometry(73,1,27,25);
        datoy = new QTextEdit(this);
        datoy->setGeometry(118,1,27,25);
}


void posicion::mouseDoubleClickEvent( QMouseEvent * e )
{
    if ( e->button() == Qt::LeftButton)
    {
        qDebug() << "imprimir\n"<<e->x()<<","<<e->y()<<"\n";
        dato_x = datox->toPlainText().toInt();
        dato_y = datoy->toPlainText().toInt();

        gat->set_posx(dato_x);
        gat->set_posy(dato_y);

        gat->mover_gato(gat->get_posx(),gat->get_posy());

    }
}

void posicion::crearnuevoboton()
{
        posicion *obj;
        obj = new posicion(gat,pant);
        obj->show();
        pant->addboton(obj);

}
