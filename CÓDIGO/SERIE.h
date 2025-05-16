//SEGUNA CLASE: SERIE.h
/*
Clase que hereda datos de la clase VIDEO.h, organiza principalmente en número
de episodios y de temporadas, junto con la información correspondiente. 
*/

//----------------------------------------------------------------------------
#ifndef SERIE_H
#define SERIE_H

//librerías y la clase video.h
#include <iostream>
#include <vector>
#include <VIDEO.h>

using namespace std;
//----------------------------------------------------------------------------
//inicio de clase "serie.h"
class serie{

    protected:
        int numEpisodios;
        int temporadas;

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:
        //Ambos constructores, parametrizado y por defecto...
        serie(int numEpisodio, int temporadas){
            numEpisodio=numEpisodio;
            temporadas=temporadas;
        }
        serie(){
            numEpisodios=0;
            temporadas=0;
        }

        //MÉTODOS.......................................
        float califGeneral(){

        };

        void showInfo(){

        };

};


#endif