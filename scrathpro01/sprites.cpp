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
     if(this->get_ejex() <= 260)
     {
         this->crearnuevoboton();
         agregarboton(this);
         //this->pant->sacarboton(this);
     }

 }

 void sprites::mouseReleaseEvent(QMouseEvent *event)
 {
     if(this->get_ejex()<=255-80){
         delete(this);
     }

}



 void sprites::mouseDoubleClickEvent(QMouseEvent *event)
{

     this->ejecutar();
     this->ejecutar_solo_click();
 }


 void sprites::ejecutar_solo_click()
 {
     //ELBOTON EJECUTAR LO ACTIVA
 }

 void sprites::ejecutar_alternativo(sprites *temp)
 {
     temp->ejecutar();

 }


 IDS sprites::get_ID(sprites *temp)
 {
    return temp->ID;
 }



 void sprites::agregarboton(sprites *nuevo)
 {
     if(nuevo->ID != "e")
     {
         player->botones_activos.push_back(nuevo);

     }
}




 void sprites::verificar_id (sprites *nuevo)
 {
     if(nuevo->ID=="e")
     {
         nuevo->ejecutar();
     }
 }

 QString sprites::enviardatos()
 {

 }

 void sprites::abrir(QTextStream &text)
 {

 }



 void sprites::guardar(sprites *temp)
{
     listaderectangulos.append(temp->ID);

     //QString str;
     //str.setNum(i);

    datoconvertido = QString::number(temp->ingre_datos);

    qDebug() << "DATO1: "<<temp->ingre_datos<<"\n";

    listadatos.append(datoconvertido);

 }


void sprites::guardarenelarchivo()
{

    QFile xml("data.xml");
    xml.open(QIODevice::WriteOnly);
    QXmlStreamWriter escritorXml(&xml);
    escritorXml.setAutoFormatting(true);
    escritorXml.writeStartDocument();

    escritorXml.writeStartElement("rectangulos");

    for (int i = 0; i < listaderectangulos.size(); i++)
    {
        QString Nombre = listaderectangulos.at(i);
        QString Dato = listadatos.at(i);

        QString Posicion = QString::number(i + 1);

        escritorXml.writeStartElement("rectangulo");
            escritorXml.writeStartElement("datos");
                escritorXml.writeAttribute("posicion", Posicion);
                escritorXml.writeAttribute("nombre",Nombre);
                escritorXml.writeAttribute("valor",Dato);
            escritorXml.writeEndElement();

        escritorXml.writeEndElement();
    }

escritorXml.writeEndElement();
escritorXml.writeEndDocument();
xml.close();

}




