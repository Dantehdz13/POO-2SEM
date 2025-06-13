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
#include "VIDEO.h"

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
        serie(int _numEpisodio, int _temporadas){
            numEpisodios=_numEpisodio;
            temporadas=_temporadas;
        }
        serie(){
            numEpisodios=0;
            temporadas=0;
        }
        //CONSTRUCTOR PARA PARÁMETROS DE POLIMORFISMO
        serie(string _nombre, string _genero, int _duracion, 
        int _id, int _temporadas, int _numEpisodios, float _calificacion):
        video(_id, _nombre,_duracion,_genero,0,_calificacion),
        temporadas(_temporadas),numEpisodios(_numEpisodios){}

     

        //MÉTODOS.......................................

        //Se usa el concepto de polimorfismo para adaptar la información
        //solicitada al concepto de una serie
        void showInfo() override{
            //Se usa el método desde la clase video
            cout <<"Nombre del programa: "<<nombre<<endl;
            cout<<"Género: "<<genero<<endl;
            cout << "temporadas disponibles: "<< temporadas<<endl;
            cout <<"Número de episodios por temporada: "<<numEpisodios<<endl;
            cout<<"id: "<<id<<endl;
            cout<<"Calificación proporcionada por los usuarios: "<<calificacion<<endl;


        };

        //SOBRECARGA: misma explicación que en la clase PELICULA
        void errorFunctionn()override{
            cout<<"ERROR EN EL REGISTRO DE LA SERIE, DATOS FALTANTES"<<endl;
        };
        void errorFunctionn(int numError){
            numError=45643;
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