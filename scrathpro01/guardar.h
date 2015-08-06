#ifndef GUARDAR_H
#define GUARDAR_H
#include <QLabel>
//#include "ventanabotones.h"
#include "tipo.h"
#include "gato.h"
#include "sprites.h"
#include <QFileDialog>
#include <QDebug>
#include <windows.h>
#include <QMessageBox>


class guardar:public QLabel
{

public:
    guardar(gato *gat,QWidget *pantalla_gato);
    void mousePressEvent(QMouseEvent * event);
    //ventanabotones *pant_boton;}
    QString file="";

    gato *player;
    tam x = 700;
    tam y = 570;
    tam ancho = 60;
    tam alto = 60;

};

#endif // GUARDAR_H
