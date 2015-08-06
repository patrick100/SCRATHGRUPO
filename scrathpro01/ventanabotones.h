#ifndef VENTANABOTONES_H
#define VENTANABOTONES_H
#include <QWidget>
#include <QLabel>
#include <vector>
//using namespace std;

typedef int (tam);

class sprites;

class ventanabotones:public QWidget
{
public:
    ventanabotones(QWidget *total);
    QWidget *linea;

    tam altop = 700;

    std::vector<sprites*> botones;

    void addboton(sprites *nuevo);
    void sacarboton(sprites *nuevo);
    void guardarboton();
    void mostrar_botones();
    QWidget *pant;

};

#endif // VENTANABOTONES_H
