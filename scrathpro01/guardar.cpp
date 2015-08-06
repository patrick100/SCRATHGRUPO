#include "guardar.h"


guardar::guardar(gato *gat,QWidget *pantalla_gato)
{

    player = gat;
    this->setPixmap(QPixmap(":/guardar.png"));
    this->setGeometry(x,y,ancho,alto);
    this->setParent(pantalla_gato);
    this->show();
}


void guardar::mousePressEvent(QMouseEvent *event)
{

    if(file==""){
        QString filters("Music files (*.mp3);;Text files (*.txt);;All files (*.*)");
        QString defaultFilter("Text files (*.txt)");
        QString direccion=QFileDialog::getSaveFileName(0, "Save file", QDir::currentPath(),
            filters, &defaultFilter);
        file=direccion;
    }

    QFile archivo(file);
    archivo.open(QIODevice::WriteOnly | QIODevice::Text);
    //poner el texto en el documento
    QTextStream out(&archivo);
    player->guardardatos(out);
    archivo.close();
    //if(file!=""){guardadoexitoso();}

}



