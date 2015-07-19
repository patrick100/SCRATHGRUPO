#include "girarder.h"
#include <QPixmap>
#include <QMatrix>
#include <QTransform>
#include <QPainter>


girarder::girarder(gato *g, ventanabotones *pantalla)
{
        gat = g;
        this->setPixmap(QPixmap(":/girar_der.png"));
        this->setGeometry(x,y,ancho,alto);
        pant = pantalla;
        datos = new QTextEdit(this);
        datos->setGeometry(71,1,30,25);
        this->setParent(pantalla);

}

void girarder::mouseDoubleClickEvent(QMouseEvent *evento)
{

    if ( evento->button() == Qt::LeftButton)
    {

        ingre_datos = datos->toPlainText().toInt();
        QPixmap sourceImage(*gat->pixmap());

        QPixmap rotatePixmap(sourceImage.size());
        rotatePixmap.fill(Qt::transparent);
        QTransform transform;
        transform.translate(sourceImage.size().width() / 2, sourceImage.size().height() / 2);
        transform.rotate(ingre_datos);
        transform.translate(-sourceImage.size().width() / 2, -sourceImage.size().height() / 2);
        QPainter p;
        p.setRenderHints(QPainter::Antialiasing|QPainter::SmoothPixmapTransform, true);
        p.begin(&rotatePixmap);
        p.setTransform(transform);
        p.drawPixmap(0, 0, sourceImage);
        p.end();
        rotatePixmap.save(":/gato.png");
        gat->setPixmap(rotatePixmap);
        gat->move(QPoint(gat->get_posx(), gat->get_posy()));
      }

}

void girarder::crearnuevoboton()
{
        girarder *obj;
        obj= new girarder(gat,pant);
        obj->show();
        pant->addboton(obj);

}

