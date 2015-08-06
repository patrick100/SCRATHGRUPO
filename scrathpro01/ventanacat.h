#ifndef VENTANACAT_H
#define VENTANACAT_H
#include "gato.h"
#include "punto.h"
#include "guardar.h"
#include "abrir.h"
#include <QWidget>
#include "tipo.h"
#include "ventanabotones.h"



class ventanacat:public QWidget
{
public:
    ventanacat(QWidget *total,ventanabotones *pantalla);
    tam altop=700;
    gato *gat;
    punto *punt;
    guardar *disco;
    abrir *open;
    ventanabotones *pant;

    inline gato* getcat(){return gat;}
    inline punto* getpunto(){return punt;}


};

#endif // VENTANACAT_H
