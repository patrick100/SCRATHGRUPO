#ifndef CONTROLHIJO_H
#define CONTROLHIJO_H
//#include "control.h"

#include "sprites.h"

class controlhijo:public sprites
{

public:
     controlhijo(ventanabotones *pantalla);

     //control *padre;
     //Coordenadas del label end
     tam x1=0;
     tam y1=500;

     void crearnuevoboton();
     //multithreading
     //void ejecutar();


};

#endif // CONTROLHIJO_H
