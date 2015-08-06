#include "gato.h"
#include <QDebug>
#include "sprites.h"

gato::gato(QWidget *pantalla)
{
    this->setPixmap(QPixmap(":/gato.png"));
    //HACER INTERNAMENTE
    pant = pantalla;

    this->setGeometry(posx,posy,ancho,alto);
    this->setParent(pantalla);

    punto=new QLabel();
    punto->setPixmap(QPixmap(":/punto.png"));
    punto->setGeometry(posx,posy,anchop,altop);
    punto->setParent(pantalla);

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



void gato::mover_gato(tam paso)
{

    tam i=0;
    if(pincelabajo==true)
    {
        tam tempx = get_posx();
        tam tempy = get_posy();

            while(i!=paso)
            {

              QLabel *punt =new QLabel();
              punt->setPixmap(QPixmap(":/punto.png"));
              punt->setGeometry(tempx,tempy,anchop,altop);
              punt->setParent(pant);
              punt->show();
              tempx += anchop;
              i += anchop;
            }

    }

    set_posx(get_posx()+paso);

    this->setGeometry(get_posx(),get_posy(),ancho,alto);
}


void gato::creandogrados()
{
    gradox=cos(giro*pi);
    gradoy=sin(giro*pi);

    qDebug()<<"GIRO:"<<giro<<"\n";
    qDebug()<<"gradox:"<<gradox<<"\n";
    qDebug()<<"gradoy:"<<gradoy<<"\n";

}

void gato::mover_con_giro(tam pasos)
{   
    cifra j=0;

    distancia = sqrt(pasos*pasos + pasos*pasos);

    if(pincelabajo==true)
    {
        tam tempx = posx;//+(gradox*distanciap);
        tam tempy = posy;//+(gradoy*distanciap);
        while(j<=pasos)
        {
              QLabel *punt =new QLabel();
              punt->setPixmap(QPixmap(":/punto.png"));
              punt->setGeometry(tempx,tempy,anchop,altop);
              punt->setParent(pant);
              punt->show();
              tempx = tempx+gradox*distanciap;//
              tempy = tempy+gradoy*distanciap;
              j = j +anchop;

         }
    }

    qDebug()<<"distancia:"<<distancia<<"\n";

    this->setGeometry(posx+(gradox*distancia),posy+(gradoy*distancia),ancho,alto);
    set_posx(posx+(gradox*distancia));
    set_posy(posy+(gradoy*distancia));

}

void borrarBoton(sprites * a){
    delete(a);
}


void gato::borrartodo()
{
    std::vector<sprites*>::iterator it;

    for(it=botones_activos.begin();it!=botones_activos.end();it++){
        borrarBoton((*it));
    }
    botones_activos.clear();
}

void gato::guardardatos(QTextStream &temp)
{

    std::vector<sprites*>::iterator it;
    for(it=botones_activos.begin();it!=botones_activos.end();it++)
    {
        temp << datos((*it));
        temp << "\n";
    }
}

QString gato::datos(sprites *temp)
{
    return temp->enviardatos();
}


