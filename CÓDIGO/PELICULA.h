//CUARTA CLASE: PELICULA.h
/*
Clase que hereda datos de VIDEO.h, al igual que SERIE.h.
*/


//----------------------------------------------------------------------------
#ifndef PELICULA_H
#define PELICULA_H

//importar librerías
#include <iostream>
#include <vector>
#include "VIDEO.h"
#include "PELICULA.h"

using namespace std;
//----------------------------------------------------------------------------
//inicio de clase "pelicula", donde heredamos atributos de VIDEO.h
class pelicula : public video{
    //Esta clase no requiere atributos propios, por consiguiente, tampoco 
    //constructores.

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:
        //MÉTODOS .........................................

        //En este caso, heredamos los atributos protegidos de VIDEO (igual se
        //hace en la mayoría de clases)

        //CONSTRUCTOR.........................................................
        pelicula(string _nombre, string _genero, float _duracion,float _calificacion, int _id):
        video(_id, _nombre,_duracion,_genero,0,_calificacion){}

        
        void showInfo()override{
            cout <<"Nombre de la película: "<<nombre<<endl;
            cout<<"Género: "<<genero<<endl;
            cout<<"Duración: "<<duracion<<endl;
            cout<<"id: "<<id<<endl;
            cout<<"Calificación dada por los usuarios: "<<calificacion<<endl;
        };

        //SOBRECARGA: se van a presentar dos funciones de nombre igual, pero
        //que presentan diferentes partes del mensaje de error...
        void errorFunctionn()override{
            cout<<"ERROR AL REGISTRAR LA PELÍCULA, DATOS NO CONCORDANTES."<<endl;
        };

        void errorFunctionn(int numError){
            numError=87302;
            cout<<"número de error: "<<numError<<endl;
        };

};


#endif 