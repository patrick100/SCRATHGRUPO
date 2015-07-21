#ifndef GATO_H
#define GATO_H
#include <QLabel>
#include <QWidget>

typedef int (tam);
typedef double (cifra);


class gato:public QLabel//:public sprites
{

public:

    gato(QWidget *pantalla);

    tam posx;
    tam posy;

    cifra giro;

    cifra gradox=0;
    cifra gradoy=0;

    tam xgenerado=0;

    bool pincelabajo = false;

    tam get_posx();
    tam get_posy();

    tam datomover =0;

    void set_posy(tam);
    void set_posx(tam);
    void mover_gato();
    void creandogrados();
    void mover_con_giro(tam pasos);

private:
    //DONDE SE VA HA INICIAR X ,Y

};




#endif // GATO_H
