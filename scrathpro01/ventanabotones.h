#ifndef VENTANABOTONES_H
#define VENTANABOTONES_H
#include <QWidget>
#include <QLabel>
#include <vector>
//using namespace std;

typedef int (tam);

class ventanabotones:public QWidget
{
public:
    ventanabotones(QWidget *total);
    QWidget *ejecucion;
    tam altop = 700;
    std::vector<QLabel*> botones;

    void addboton(QLabel *nuevo);
    void sacarboton(QLabel *nuevo);
    void mostrar_botones();
    QWidget *pant;

};

#endif // VENTANABOTONES_H
