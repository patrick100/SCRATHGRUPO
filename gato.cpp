#include "gato.h"
//AHORA SI FUNCIONA

gato::gato()
{
    this->setPixmap(QPixmap(":/gato.png"));
    pos_x=0;
    pos_y=0;
    this->setGeometry(get_posx(),get_posy(),90,90);

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
    this->setGeometry(get_posx(),get_posy(),100,100);
}
