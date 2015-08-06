#ifndef GATO_H
#define GATO_H
#include <QLabel>
#include <QWidget>
#include <vector>
#include "tipo.h"
#include "math.h"
#include <QTextStream>


class sprites;

class gato:public QLabel//:public sprites
{

public:

    gato(QWidget *pantalla);

    QLabel *punto;

    QWidget *pant;

    tam posx=280;
    tam posy=300;

    tam ancho = 90;
    tam alto = 90;

    tam altop=5;
    tam anchop=5;

    cifra giro=0;

    cifra pi = 3.14159/180.0;

    cifra gradox=0;
    cifra gradoy=0;

    tam distancia=0;

    bool pincelabajo = false;

    tam get_posx();
    tam get_posy();

    tam datomover =0;

    void set_posy(tam);
    void set_posx(tam);
    void mover_gato(tam paso);
    void creandogrados();
    void mover_con_giro(tam pasos);
    cifra distanciap = 7.07106781187;
    //tam distanciap = sqrt(5.0*5.0 + 5.0*5.0);


    void borrartodo();

    //std::vector<sprites*>::iterator it;
    std::vector <sprites*> botones_activos;

    void guardardatos(QTextStream &temp);

    QString datos(sprites *temp);


private:
    //DONDE SE VA HA INICIAR X ,Y

};




#endif // GATO_H
