#ifndef VENTANACAT_H
#define VENTANACAT_H
#include "gato.h"
#include <QWidget>

typedef int (tam);


class ventanacat:public QWidget
{
public:
    ventanacat(QWidget *total);
    tam altop=700;
    gato *gat;

    inline gato* getcat(){return gat;}

};

#endif // VENTANACAT_H
