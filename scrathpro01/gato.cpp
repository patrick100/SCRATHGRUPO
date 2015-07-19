#include "gato.h"
//AHORA SI FUNCIONA

gato::gato(QWidget *pantalla)
{
    this->setPixmap(QPixmap(":/gato.png"));
    pos_x=280;
    pos_y=300;
    this->setGeometry(pos_x,pos_y,90,90);
    this->setParent(pantalla);

}


void gato::set_posx(tam x){
    pos_x = x;
}


void gato::set_posy(tam y){
    pos_y = y;
}

tam gato::get_posx(){
    return pos_x;
}

tam gato::get_posy(){
    return pos_y;
}



void gato::mover_gato(tam a, tam b){
    set_posx(a);
    set_posy(b);
    this->setGeometry(get_posx(),get_posy(),90,90);
}

