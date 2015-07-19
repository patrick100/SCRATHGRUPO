#ifndef PUNTO_H
#define PUNTO_H
#include <QLabel>
typedef int (tam);

class punto:public QLabel
{
public:
    punto();
    tam x;
    tam y;
    void printpoint(tam a, tam b);
};

#endif // PUNTO_H
