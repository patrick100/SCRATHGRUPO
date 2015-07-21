#ifndef GUARDAR_H
#define GUARDAR_H
#include <QLabel>
//#include "ventanabotones.h"

class guardar:public QLabel
{

public:
    guardar(QWidget *pantalla_gato);
    void mouseDoubleClickEvent(QMouseEvent *event);
    //ventanabotones *pant_boton;


};

#endif // GUARDAR_H
