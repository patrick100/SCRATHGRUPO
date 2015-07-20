#ifndef CONTROLFINAL_H
#define CONTROLFINAL_H
#include "sprites.h"
#include <QTextEdit>
#include "gato.h"
#include <QLabel>

class controlfinal:public sprites
{
public:
    controlfinal(gato *g, ventanabotones *pantalla);
    gato *gat;
    tam x= 0;
    tam y= 150;


    void crearnuevoboton();
    void ejecutar();
};

#endif // CONTROLFINAL_H
