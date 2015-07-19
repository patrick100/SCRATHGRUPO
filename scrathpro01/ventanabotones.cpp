#include "ventanabotones.h"

ventanabotones::ventanabotones(QWidget *total)
{
    this->setGeometry(0,0,600,altop);
    this->setStyleSheet("background-color:#AE6161;");
    this->setParent(total);

    ejecucion=new QWidget(this);
    ejecucion->setGeometry(250,0,350,altop);
    ejecucion->setStyleSheet("background-color:#DE7979;");


}

void ventanabotones::addboton(QLabel *nuevo)
{
    botones.push_back(nuevo);
}


void ventanabotones::sacarboton(QLabel *nuevo)
{
    std::vector<QLabel*>::iterator it;//declaro it de tipo vector qlabel

    it=std::find(botones.begin(),botones.end(),nuevo);

    if((*it)==nuevo)
    {
        botones.erase(it);
    }
}

// llamar a la funcion

void mostrar (QLabel * i) {
  i->show();
}
void ocultar(QLabel * i) {
  i->hide();
}


void ventanabotones::mostrar_botones()
{
    std::for_each(botones.begin(),botones.end(),mostrar);
}

