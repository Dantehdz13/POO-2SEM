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
#include <VIDEO.h>

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

        //Sobreescribimos datos que estaban ya establecidos en VIDEO
        void showInfo() override{
            cout <<"Película: "<<nombre<<endl;
            cout<<"Duracion: "<<duracion<<endl;
            cout<<"Pertenece al género "<<genero<<endl;
        };
        
        void califGeneral(){
            cout<<"Esta película recibe una clasificación en base a los usuarios"
            "de: "<< showClasificacion()<<endl;

        };

        //SOBRECARGA: se van a presentar dos funciones de nombre igual, pero
        //que presentan diferentes partes del mensaje de error...
        void errorFunctionn(){
            cout<<"Se ha producido un error..."<<endl;
        };

        void errorFunctionn(int numError){
            cout<<"número de error: "<<numError<<endl;
        };

};


#endif 