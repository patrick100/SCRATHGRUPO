#include "gato.h"
#include "math.h"
#include <QDebug>

gato::gato(QWidget *pantalla)
{
    this->setPixmap(QPixmap(":/gato.png"));
    //HACER INTERNAMENTE
    posx=280;
    posy=300;
    this->setGeometry(posx,posy,90,90);
    this->setParent(pantalla);
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



void gato::mover_gato()
{

    this->setGeometry(get_posx(),get_posy(),90,90);

}
void gato::creandogrados()
{
    gradox=cos(giro*3.14159/180.0);
    gradoy=sin(giro*3.14159/180.0);

    qDebug()<<"GIRO:"<<giro<<"\n";
    qDebug()<<"gradox:"<<gradox<<"\n";
    qDebug()<<"gradoy:"<<gradoy<<"\n";

}

void gato::mover_con_giro(tam pasos)
{
    tam distancia = sqrt(pasos*pasos + pasos*pasos);
    qDebug()<<"distancia:"<<distancia<<"\n";

    this->setGeometry(posx+(gradox*distancia),posy+(gradoy*distancia),90,90);

    xgenerado = gradox*distancia;

    set_posx(posx+(gradox*distancia));
    set_posy(posy+(gradoy*distancia));

}




