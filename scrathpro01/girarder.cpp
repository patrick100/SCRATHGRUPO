#include "girarder.h"
#include <QPixmap>
#include <QTransform>
#include <QPainter>


girarder::girarder(gato *g, ventanabotones *pantalla)
{
        player = g;
        pant = pantalla;
        ID = "g";
        name = "girarder";
        this->setPixmap(QPixmap(":/girar_der.png"));
        this->setGeometry(x,y,ancho,alto);
        pant = pantalla;
        datos = new QTextEdit(this);
        datos->setGeometry(tx,ty,tancho,talto);
        this->setParent(pantalla);

}

void girarder::ejecutar()
{
        ingre_datos = datos->toPlainText().toInt();
        rotarplayer(ingre_datos);

}

void girarder::rotarplayer(tam grados)
{

    QPixmap sourceImage(*player->pixmap());
    QPixmap rotatePixmap(sourceImage.size());
    rotatePixmap.fill(Qt::transparent);

    QTransform transform;
    transform.translate(sourceImage.size().width() / 2, sourceImage.size().height() / 2);

    transform.rotate(grados);

    transform.translate(-sourceImage.size().width() / 2, -sourceImage.size().height() / 2);

    QPainter p;

    p.begin(&rotatePixmap);
    p.setTransform(transform);
    p.drawPixmap(0, 0, sourceImage);
    p.end();

    rotatePixmap.save(":/temp.png");

    player->setPixmap(rotatePixmap);
    player->giro = player->giro + grados;

}

QString girarder::enviardatos()
{
    QString list="";

    QString texto1=datos->toPlainText();
    QString posiX = QString::number(ejex);
    QString posiY = QString::number(ejey);

    list = list+name+" "+texto1+" "+" X "+posiX+" Y "+posiY;
    return list;
}

void girarder::abrir(QTextStream &text)
{

    this->pant->sacarboton(this);
    this->crearnuevoboton();
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


void girarder::crearnuevoboton()
{
        girarder *obj;
        obj= new girarder(player,pant);
        obj->show();
        pant->addboton(obj);
}

