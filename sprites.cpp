#include "sprites.h"


sprites::sprites()
{

}

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

void sprites::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()==Qt::LeftButton){

        //e->mouseState;
        moversprites(e->x(),e->y());
        qDebug() << "move to\n"<<e->x()<<","<<e->y()<<"\n";

    }
}

 void sprites::moversprites(tam a, tam b)
{

   set_ejex(get_ejex()+a);
   set_ejey(get_ejey()+b);
   this->setGeometry(get_ejex(),get_ejey(),140,40);
}



