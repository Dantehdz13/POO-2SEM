//PRIMERA CLASE: VIDEO.h
/*
Esta clase contendrá los datos y características generales de los aatributos
respectivos a los videos mencionados en la instruccional de la SP. 
De esta clase heredan el resto.
*/


//----------------------------------------------------------------------------
#ifndef VIDEO_H
#define VIDEO_H

//importar librerías
#include <iostream>
#include <vector>

using namespace std;
//----------------------------------------------------------------------------
//inicio de clase "video"
class video{

    //Atributos generales de los videos
    protected:
        int id;
        string nombre;
        float duracion;
        string genero;

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:

        //constructor parametrizado
        video(int id, string nombre, float duracion, string genero){
            id=id;
            nombre=nombre;
            duracion=duracion;
            genero=genero;
        }
        //constructor por defecto
        video(){
            id=0;
            nombre="";
            duracion=0;
            genero="";
        }

        //MÉTODOS .........................................
        void showInfo(){

        };
        
        float shoeClasifiacion(){

        };

};


#endif 