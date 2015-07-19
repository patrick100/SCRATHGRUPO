#include "mainwindow.h"
#include <QApplication>
#include "ventana.h"
#include "QDebug"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //creo un objeto w de ventana donde se encuentra todo lo necesario para imprimir al gato
    ventana *vent = new ventana();
    //wind->load_sprites();
    vent->show();
    return a.exec();
}
