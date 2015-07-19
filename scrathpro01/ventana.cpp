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

    move = new mover(programa->getcat(),botones);
    botones->addboton(move);


    posc = new posicion(programa->getcat(),botones);
    botones->addboton(posc);

    giroder = new girarder(programa->getcat(),botones);
    botones->addboton(giroder);


    //lapiz = new bajarlapiz(programa->getcat(),botones);
    //botones->addboton(lapiz);

    //Muestra todos los botones desde el vector
    botones->mostrar_botones();

}



