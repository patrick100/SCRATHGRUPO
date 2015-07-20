#include "sprites.h"

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

     if(event->buttons()==Qt::LeftButton && event->globalX()<600)
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

 void sprites::mouseReleaseEvent(QMouseEvent *event)
 {
     if(this->get_ejex()<=250){
         delete(this);
     }
     /*if(this->get_ejex()<=250){
         if(this->get_aux()!=nullptr){
             (this->get_aux())->set_size_lista(-1);

             (this->get_aux())->cambiar_medio((this->get_aux())->get_size_lista());
              if((this->get_aux())->get_size_lista()==0){
                  (this->get_aux())->set_dentro(nullptr);
              }
              this->set_aux(nullptr);
         }
         obj->sacar_del_vector(this);
         delete(this);
     }

     else{

         //VERIFICANDO QUE NO SE REPITA EN EL VECTOR

         std::vector<Bloques*>::iterator it;
         it=std::find(obj->bloques_activos.begin(),obj->bloques_activos.end(),this);

         //verificar si no hay repeticiones
         if((it==obj->bloques_activos.end())||(obj->bloques_activos.size()==0)){
             obj->agregar_vector(this);
             qDebug() <<"agregado"<<"\n";
         }

         obj->verificar(this);
         qDebug() << obj->bloques_activos.size();*/

 }



 void sprites::mouseDoubleClickEvent(QMouseEvent *event)
 {

     this->ejecutar();

 }



