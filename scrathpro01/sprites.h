#ifndef SPRITES_H
#define SPRITES_H
#include <QLabel>
#include <QMouseEvent>
#include <QDebug>
#include <QPainter>
#include "ventanabotones.h"
#include <QTextEdit>
#include "gato.h"
#include "tipo.h"

#include <QMainWindow>
#include <QXmlStreamWriter>
#include <QTextStream>
#include <QFile>

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

    void guardar(sprites *temp);

    QString datoconvertido;

    tam alto = 40;
    tam ancho = 140;


    tam ejex=0;
    tam ejey=0;

//TODO SE HEREDA

    //Creo un vector de  todos los vectores que estan en la pantalla de ejecucion



    gato *player;
    ventanabotones *pant;

    tam ingre_datos = 0;
    QString datotemp;

    QString listaderectangulos;
    QString listadatos;
    IDS ID;
    IDS name;

    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent * event);
    void mouseDoubleClickEvent(QMouseEvent * event);

    //metodos virtuales puros
    virtual void crearnuevoboton()=0;
    virtual void ejecutar()=0;
    virtual void ejecutar_solo_click();
    virtual QString enviardatos();
    virtual void abrir(QTextStream & text);



    void ejecutar_alternativo(sprites *temp);
    IDS get_ID(sprites *temp);

    //es el primer boton en ser agregado a la pantalla de ejecucion
    sprites *primero=nullptr;
    sprites *enlace=nullptr;


    void set_primero(sprites * nuevo);

    sprites *get_primero();


    void set_enlace(sprites * nuevo);
    sprites * get_enlace();


    sprites * get_ultimo();

    void agregarboton(sprites * nuevo);

    void ejecutar_primero();

    void verificar_id(sprites *nuevo);


    void guardarenelarchivo();
};

#endif // SPRITES_H
