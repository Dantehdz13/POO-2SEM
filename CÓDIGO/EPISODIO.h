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
#include <VIDEO.h>
#include <SERIE.h>

using namespace std;
//----------------------------------------------------------------------------
//inicio de clase "episoidio.h"
class serie : public serie{

    private:
        string titulo;
        int ubiTemporada;

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:
        //Ambos constructores, parametrizado y por defecto...
        serie(string titulo, int ubiTemporada){
            titulo=titulo;
            ubiTemporada=ubiTemporada;
        }
        serie(){
            titulo="";
            ubiTemporada=0;
        }

        //MÉTODOS.......................................
        float califParticular(){

        };

        void showInfo(){

        };

        void errorFunctionn(){

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