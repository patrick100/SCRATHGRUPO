#include "posicion.h"

posicion::posicion(gato *g, ventanabotones *pantalla)
{
        ID = "p";
        name = "mover";
        player = g;
        pant = pantalla;
        this->setPixmap(QPixmap(":/posicion.png"));
        this->setGeometry(x,y,ancho,alto);
        this->setParent(pantalla);

        datox = new QTextEdit(this);
        datox->setGeometry(t1x,t1y,t1ancho,t1alto);
        datoy = new QTextEdit(this);
        datoy->setGeometry(t2x,t2y,t2ancho,t2alto);

}

QString posicion::enviardatos()
{
    QString list="";

    QString texto1=datos->toPlainText();
    QString posiX = QString::number(ejex);
    QString posiY = QString::number(ejey);

    list = list+name+" "+texto1+" "+" X "+posiX+" Y "+posiY;
    return list;

}

void posicion::abrir(QTextStream &text)
{

    this->crearnuevoboton();
    //(this->get_ventana())->sacar_vectores(this);
    this->show();
    QString v;
    for(tam i=0;i<5;i++){
        text >> v;
        if(i==0){ingre_datos=v.toInt();datos->setText(v);}
        if(i==2){this->set_ejex(v.toInt());}
        if(i==4){this->set_ejey(v.toInt());}
    }
    this->setGeometry((this->get_ejex()),(this->get_ejey()),170,30);
}


void posicion::ejecutar()
{
        dato_x = datox->toPlainText().toInt();
        dato_y = datoy->toPlainText().toInt();
        player->set_posx(dato_x);
        player->set_posy(dato_y);
        player->mover_gato(0);
}



void posicion::crearnuevoboton()
{
        posicion *obj;
        obj = new posicion(player,pant);
        obj->show();
        pant->addboton(obj);

}
