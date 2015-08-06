#include "mover.h"


mover::mover(gato *g,  ventanabotones *pantalla)
{
    ID = "m";
    name = "mover";
    player = g;
    pant = pantalla;
    this->setPixmap(QPixmap(":/mover.png"));
    this->setGeometry(x,y,ancho,alto);
    datos = new QTextEdit(this);
    datos->setGeometry(tx,ty,tancho,talto);
    this->setParent(pantalla);
    ingre_datos = 9;
}


void mover::ejecutar()
{

        ingre_datos = datos->toPlainText().toInt();
        player->datomover = ingre_datos;

        if(player->giro!=0)
        {
            player->creandogrados();
            player->mover_con_giro(ingre_datos);
        }

        else
        {
            player->mover_gato(ingre_datos);

        }

}

QString mover::enviardatos()
{
    QString list="";

    QString texto1=datos->toPlainText();
    QString posiX = QString::number(ejex);
    QString posiY = QString::number(ejey);

    list = list+name+" "+texto1+" "+" X "+posiX+" Y "+posiY;
    return list;

}

void mover::abrir(QTextStream &text)
{

    this->crearnuevoboton();
    this->pant->sacarboton(this);
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


void mover::crearnuevoboton()
{
    mover *mov = new mover(player,pant);
    mov->show();
    pant->addboton(mov);
}
