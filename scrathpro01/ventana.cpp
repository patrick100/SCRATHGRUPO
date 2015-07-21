#include "ventana.h"
#include <QLabel>


ventana::ventana()
{

    this->setWindowTitle("SCRATCH-PRO");
    this->resize(1366,altop);

    botones = new ventanabotones(this);
    programa = new ventanacat(this);

    //PARA MOSTRAR LOS BOTONES LOS INGRESO EN EL VECTOR DONDE EXISTE SHOW PERO PARA ELLO
    //TENGO QUE ENVIARLE EN SU CONSTRUCTOR DE BOTONES EL LA PANTALLA A LA QUE PERTENECE

    move = new mover(programa->getcat(),programa->punt,botones);
    botones->addboton(move);


    posc = new posicion(programa->getcat(),botones);
    botones->addboton(posc);

    giroder = new girarder(programa->getcat(),botones);
    botones->addboton(giroder);


    pincel = new lapiz(programa->getcat(),programa->getpunto(),botones);
    botones->addboton(pincel);

    padre = new control(programa->getcat(),botones);
    botones->addboton(padre);

    botonend = new controlfinal(programa->getcat(),botones);
    botones->addboton(botonend);

    ejecucion = new botonejecutar(programa->getcat(),botones);
    botones->addboton(ejecucion);

    //Muestra todos los botones desde el vector
    botones->mostrar_botones();

}



