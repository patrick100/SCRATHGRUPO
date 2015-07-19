#ifndef VENTANA_H
#define VENTANA_H
#include <QMainWindow>
#include "mover.h"
#include "posicion.h"
#include "girarder.h"
#include "ventanabotones.h"
#include "ventanacat.h"

typedef double(cifra);

class ventana:public QMainWindow
{
    private:
    cifra alto;
    cifra ancho;
    gato *gat;
    mover *move;
    girarder *giroder;
    posicion *posc;
    //bajarlapiz *lapiz;
    //punto *punt;
    //void conectarsprites();

    public:
    ventana();
    ventanabotones *botones;
    ventanacat *programa;
    int altop = 768;

};

#endif // VENTANA_H
