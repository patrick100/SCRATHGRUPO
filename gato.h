#ifndef GATO_H
#define GATO_H
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QWidget>

typedef int (tam);
typedef double(cifra);


class gato:public QLabel
{
    private:


    public:
        cifra pos_x;
        cifra pos_y;
        gato();
        cifra get_posx();
        cifra get_posy();

        void set_posy(cifra);
        void set_posx(cifra);

        void mover_gato(cifra a,cifra b);

};






#endif // GATO_H
