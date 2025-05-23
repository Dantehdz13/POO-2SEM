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
class serie : public video{
    //Atributos en privado por los modificadores de acceso
    private:
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

        /*
        Este método se mantiene como float, en caso de que se busque heredar
        a la clase EPISODIO...
        */
        float califGeneral(){
            float clasifGen=showClasificacion();
            cout<<"Esta serie recibe una clasificación en base a los usuarios"
            "de: "<<endl;
            return clasifGen;
        };

        //Se sobrescribe de la clase VIDEO (aunque realmente no tiene
        //información)
        void showInfo() override{
            cout <<"Serie: "<<nombre<<endl;
            cout<<"Duracion: "<<duracion<<endl;
            cout<<"Pertenece al género "<<genero<<endl;
        };

        //SOBRECARGA: misma explicación que en la clase PELICULA
        void errorFunctionn(){
            cout<<"Se ha producido un error..."<<endl;
        };
        void errorFunctionn(int numError){
            cout<<"número de error: "<<numError<<endl;
        };

        //GETTERS...................................
        int getNumEpisodios(){
            return numEpisodios;
        }

        int getTemporadas(){
            return temporadas;
        }


};


#endif