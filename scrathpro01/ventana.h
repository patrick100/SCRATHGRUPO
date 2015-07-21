#ifndef VENTANA_H
#define VENTANA_H
#include <QMainWindow>
#include "mover.h"
#include "posicion.h"
#include "girarder.h"
#include "ventanabotones.h"
#include "ventanacat.h"
#include "lapiz.h"
#include "punto.h"
#include "control.h"
#include "controlfinal.h"
#include "botonejecutar.h"


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
    lapiz *pincel;
    punto *punt;
    control *padre;
    controlfinal *botonend;
    botonejecutar *ejecucion;
    //void conectarsprites();

    public:
    ventana();
    ventanabotones *botones;
    ventanacat *programa;
    int altop = 768;

};

#endif // VENTANA_H
