#include "gato.h"
//AHORA SI FUNCIONA
#include <math.h>

gato::gato(QWidget *pantalla)
{
    this->setPixmap(QPixmap(":/gato.png"));
    posx=280;
    posy=300;
    this->setGeometry(posx,posy,90,90);
    this->setParent(pantalla);
    rotacionactivada = false;
    giro = 0;

}


void gato::set_posx(tam x){
    posx = x;
}


void gato::set_posy(tam y){
    posy = y;
}

tam gato::get_posx(){
    return posx;
}

tam gato::get_posy(){
    return posy;
}



void gato::mover_gato(tam a, tam b){

    if (giro == 0)
    {

        this->setGeometry(get_posx(),get_posy(),90,90);
    }

    if (giro ==90)
    {
        set_posx(a);
        set_posy(b);
        this->setGeometry(get_posy(),get_posx(),90,90);
    }

    if (giro ==180)
    {
        set_posx(a);
        set_posy(b);
        this->setGeometry(get_posx(),get_posy(),90,90);
    }

    if (giro ==360)
    {
        set_posx(a);
        set_posy(b);
        this->setGeometry(get_posx(),get_posy(),90,90);
    }



}
void gato::creandogrados()
{
    gradox=cos((giro*3.1415)/180);
    gradoy=sin((giro*3.1415)/180);

}




