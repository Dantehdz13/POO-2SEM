//ÚLTIMA CLASE: PLATAFORMA.h
/*
Clase rlacionada con VIDEOS.h, la cuál guarda el total del videos de la misma,
organizandolos en series y películas.
*/


//----------------------------------------------------------------------------
#ifndef PLATAFORMA_H
#define PLATAFORMA_H

//importar librerías y clase viddeo.h
#include <iostream>
#include <vector>
#include <VIDEO.h>

using namespace std;
//----------------------------------------------------------------------------
//inicio de clase "plataforma"
class plataforma{

    //Atributos generales de los videos
    protected:
        int todosvideos;

    //------------------------------------------------------------------------
    //Métodos, constructores, getters y setters en público
    public:

        //constructor parametrizado
        plataforma(int todosVideos){
            todosVideos=todosVideos;
        }
        //constructor por defecto
        plataforma(){
            todosvideos=0;
        }

        //MÉTODOS .........................................
        void showSerie(){

        };

        void showPelicula(){

        };

        void showTodosVideos(){

        };
    
    };
#endif 