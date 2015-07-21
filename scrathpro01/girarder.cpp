#include "girarder.h"
#include <QPixmap>
#include <QTransform>
#include <QPainter>


girarder::girarder(gato *g, ventanabotones *pantalla)
{
        player = g;
        ID = 'g';

        this->setPixmap(QPixmap(":/girar_der.png"));
        this->setGeometry(x,y,ancho,alto);
        pant = pantalla;
        datos = new QTextEdit(this);
        datos->setGeometry(71,1,30,25);
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
    player->giro = grados;

}

void girarder::crearnuevoboton()
{
        girarder *obj;
        obj= new girarder(player,pant);
        obj->show();
        pant->addboton(obj);
}

