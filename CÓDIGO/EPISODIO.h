//TERCERA CLASE: EPISODIO.h
/*
Clase que hereda datos de la clase VIDEO.h y SERIE.h, adentrandose más en la 
clase serie.h, episodio.h es dpendiente de esta, ya que se enfoca en 
adentrarse en detalles más específicos de la serie 
*/

//----------------------------------------------------------------------------
#ifndef EPISODIO_H
#define EPISODIO_H

//librerías y las demás clases.
#include <iostream>
#include <vector>
#include "VIDEO.h"
#include "SERIE.h"

using namespace std;
//----------------------------------------------------------------------------
//inicio de clase "episoidio.h"
class episodio : public serie{

    private:
        string titulo;
        int ubiTemporada;
        int numEpisodios;
        int temporadas;

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:
        //Ambos constructores, parametrizado y por defecto...
        episodio(string nombre,string genero,float duracion,int id,
            int temporadas,
            int numEpisodios,string titulo,int ubiTemporada, float calificacion)
            :serie(nombre, genero, duracion, id,
             temporadas, numEpisodios,calificacion),titulo(titulo),
            ubiTemporada(ubiTemporada){}


        //MÉTODOS.......................................
        void showInfo() override{
                //Concepto de polimorfismo: se heredan y modifican atributos
            //del método, pero ubicado en "serie"
            serie::showInfo();
            cout <<"Nombre del episodio: "<<titulo<<endl;
            cout <<"Temporada en la que se encuentra: "<<ubiTemporada<<endl;
        };

        void errorFunctionn(int numError){
            numError=47392;
           serie::errorFunctionn();
           cout<<"PROBLEMA AL CARGAR EL EPISODIO"<<endl;
           cout<<"código de error: "<<numError<<endl;
        };

        //GETTERS PARA ACCEDER A LOS ATRIBUTOS PRIVADOS:.......................
        string getTitulo(){
            return titulo;
        }

        int getUbiTemporada(){
            return ubiTemporada;
        }

};


#endif