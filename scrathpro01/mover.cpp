#include "mover.h"
#define crearnuevo(a,b) ((a)>(b)?(a):(b))

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


void mover::ejecutar()
{
        ingre_datos = datos->toPlainText().toInt();

            gat->set_posx(gat->get_posx()+ingre_datos);
            gat->set_posy(gat->get_posy());
            gat->mover_gato(gat->get_posx(),gat->get_posy());

       /*gat->creandogrados();
       gat->mover_gato(gat->gradox*ingre_datos,gat->gradoy*ingre_datos);
       */

}

void mover::crearnuevoboton()
{
    //__FILE__ .
    mover *mov = new mover(gat,pant);
    mov->show();
    pant->addboton(mov);
}
