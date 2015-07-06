#ifndef VENTANA_H
#define VENTANA_H
#include <QWidget>
#include <QMainWindow>
#include "gato.h"

#include "mover.h"
#include "girarder.h"
#include "girarizq.h"


typedef double(cifra);

class ventana:public QMainWindow

{
    private:
    cifra alto;
    cifra ancho;
    gato *gat;
    mover *move;
    girarder *giroder;
    girarizq *giroizq;

    public:
    ventana();
    QWidget * pant_cat;
    QWidget * pant_botones;
    QWidget * pant_ejecutar;
    QWidget * linea;
    int altop = 600;

};

#endif // VENTANA_H
