#include "abrir.h"
#include <QFileDialog>
#include <QDir>
#include "sprites.h"

abrir::abrir(gato *gat, guardar *disc,QWidget *pantalla_gato ,ventanabotones *panta)
{
    player = gat;
    guard = disc;
    boton = panta;
    this->setPixmap(QPixmap(":/abrir.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pantalla_gato);
    this->show();

}

void abrir::mousePressEvent(QMouseEvent *evento)
{

        QString filters("Music files (*.mp3);;Text files (*.txt);;All files (*.*)");
        QString defaultFilter("Text files (*.txt)");

        QString direccion=QFileDialog::getOpenFileName(0, "Open file", QDir::currentPath(),
        filters, &defaultFilter);
        if(direccion!=""){player->borrartodo();}
        qDebug() << direccion;
        QFile archivo(direccion);
        archivo.open(QIODevice::ReadOnly);
        QTextStream input(&archivo);
        abrirDatos(input);
        //file = direccion;
}


bool verificarId(QString t,sprites * a)
{
    if(a->name==t){
        return true;
    }
    return false;
}


void abrir::abrirDatos(QTextStream &a)
{
    QString text;
    QString text1;
    sprites * ar;
    std::vector<sprites*>::iterator it;
    while(true){
        a >> text;
        if(text==""){break;}
        qDebug()<<text;
        for(it=boton->botones.begin();it!=boton->botones.end();it++){
            if(verificarId(text,(*it))){

                ar=(*it);
                ar->abrir(a);
                break;
            }
        }
   }
}
