#ifndef BAJARLAPIZ_H
#define BAJARLAPIZ_H
#include "gato.h"
#include "sprites.h"
#include <QPainter>
#include <QPixmap>
//#include "punto.h"


class bajarlapiz:public sprites
{
public:
    tam x=0;
    tam y=500;
    bajarlapiz(gato *g, ventanabotones *pantalla);
    gato *gat;
    //punto *punt;
    void crearnuevoboton();

    void mouseDoubleClickEvent(QMouseEvent * event );
};

#endif // BAJARLAPIZ_H
