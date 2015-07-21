#ifndef SPRITES_H
#define SPRITES_H
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include <QPainter>
#include "ventanabotones.h"
#include <QTextEdit>
#include "gato.h"

typedef int (tam);
typedef char (IDS);

class sprites:public QLabel
{
public:
    sprites();

    void set_ejex(tam);
    void set_ejey(tam);
    tam get_ejex();
    tam get_ejey();
    void moversprites(tam a, tam b,tam alt,tam anch);
    void movergato(tam a,tam b);


    tam alto = 40;
    tam ancho = 140;


    tam ejex=0;
    tam ejey=0;




protected://TODO SE HEREDA

    gato *player;
    ventanabotones *pant;
    QTextEdit *datos;
    tam ingre_datos=0;

    IDS ID;

    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent * event);
    void mouseDoubleClickEvent(QMouseEvent * event);

    //metodos virtuales puros
    virtual void crearnuevoboton()=0;
    virtual void ejecutar()=0;



    std::vector <sprites*> botones_activos;
    void agregar_vector(sprites * nuevo);
    void sacar_del_vector(sprites * nuevo);
    void verificar(sprites * nuevo);
    void verificar_vector(sprites * nuevo);
    void correr_vector();

};

#endif // SPRITES_H
