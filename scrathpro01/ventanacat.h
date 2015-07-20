#ifndef VENTANACAT_H
#define VENTANACAT_H
#include "gato.h"
#include "punto.h"
#include <QWidget>

typedef int (tam);


class ventanacat:public QWidget
{
public:
    ventanacat(QWidget *total);
    tam altop=700;
    gato *gat;
    punto *punt;
    inline gato* getcat(){return gat;}
    inline punto* getpunto(){return punt;}

};

#endif // VENTANACAT_H
