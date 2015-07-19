#include "sprites.h"
#include <QDragEnterEvent>
#include <QMimeData>


sprites::sprites(){}


void sprites::set_ejex(tam x)
{
    ejex = x;

}

void sprites::set_ejey(tam y)
{
    ejey = y;
}

tam sprites::get_ejex()
{
    return ejex;
}

tam sprites::get_ejey()
{
    return ejey;
}

 void sprites::moversprites(tam a, tam b, tam alt, tam anch)
{
   set_ejex(get_ejex()+a);
   set_ejey(get_ejey()+b);
   this->setGeometry(get_ejex(),get_ejey(),alt,anch);
 }




 void sprites::mouseMoveEvent(QMouseEvent *event)
 {

     if(event->buttons()==Qt::LeftButton && event->globalX()<700)
     {
        moversprites(event->x(),event->y(),170,30);
     }
}



 void sprites::mousePressEvent(QMouseEvent *event)
 {
     if(this->get_ejex() <= 250)
     {
         this->crearnuevoboton();
         this->pant->sacarboton(this);
     }

 }



