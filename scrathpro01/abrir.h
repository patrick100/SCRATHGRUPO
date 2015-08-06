#ifndef ABRIR_H
#define ABRIR_H
#include "QLabel"
#include "gato.h"
#include "guardar.h"
#include "ventanabotones.h"

class sprites;
class ventanabotones;

class abrir:public QLabel
{
public:
    abrir(gato *gat, guardar *disc, QWidget *pantalla_gato, ventanabotones *panta);

    gato * player;
    guardar * guard;
    bool temp = true;

    tam x = 600;
    tam y = 570;
    tam ancho = 60;
    tam alto = 60;

    QString file="";

    //bool abrir = false;
    ventanabotones * boton;

    void mousePressEvent(QMouseEvent * evento);
    void abrirDatos(QTextStream &a);

};

#endif // ABRIR_H
