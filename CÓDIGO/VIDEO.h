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
        int numError;
        float calificacion;

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:

        //constructor parametrizado
        video(int _id, string _nombre, float _duracion, string _genero, int _numError, float _calificacion){
            id=_id;
            nombre=_nombre;
            duracion=_duracion;
            genero=_genero;
            numError=_numError;
            calificacion=_calificacion;
        }
        //constructor por defecto
        video(){
            id=0;
            nombre="";
            duracion=0;
            genero="";
            numError=0;
            calificacion=0.00f;
        }

        //MÉTODOS .........................................

        /*
        CORRECCIÓN: ya que como tal no tiene utilidad llenar estos métodos
        en esta clase, porque el propósito es heredar estos a las clases SERIE
        y PELICULA, se van a poner como métodos virtuales, para que se puedan
        reescribir sin mayor problema en las clases mencionadas.
        */
        virtual void showInfo(){}
   
        virtual void errorFunctionn()=0;
};


#endif 