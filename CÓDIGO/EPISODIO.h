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

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:
        //Ambos constructores, parametrizado y por defecto...
        episodio(string _nombre,string _genero,float _duracion,int _id,int _temporadas,
                 int _numEpisodios,string _titulo,int _ubiTemporada)
            :serie(_nombre, _genero, _duracion, _id, _temporadas, _numEpisodios),
              titulo(_titulo),
              ubiTemporada(_ubiTemporada){}


        episodio():
        serie("","",0.0f,0,0,0),
        titulo(""),
        ubiTemporada(0)
        {}

        //MÉTODOS.......................................
        float califParticular(){
            return 0;
        };

        void showInfo(){
                //Concepto de polimorfismo: se heredan y modifican atributos
            //del método, pero ubicado en "serie"
            serie::showInfo();
            cout <<"Nombre del episodio: "<<titulo<<endl;
            cout <<"Temporada: "<<ubiTemporada<<endl;
        };

        void errorFunctionn(){
           serie:errorFunctionn(); 
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