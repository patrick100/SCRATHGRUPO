#include "punto.h"


typedef int (tam);

punto::punto()
{
    this->setPixmap(QPixmap(":/punto.png"));
    this->setGeometry(x,y,5,5);
    //this->setParent(pantalla);
}


void punto::printpoint(tam a, tam b){
    this->setGeometry(a,b,5,5);
    //linea->setRenderHint(QPainter::Antialiasing);
    //linea->setPen(Qt::red);
    //linea->drawLine(x,y,x+longitud,y);
}



//OTRA SOLUCION UTILIZAR OTRO NEW PUNTO
