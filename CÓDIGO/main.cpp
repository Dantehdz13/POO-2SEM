//DANTE HERNÁNDEZ RAMÍREZ - A01668070
/*
MODELADO DE SERVICIO DE STREAMING

Primer Avance:
-Creación de diagrama de clases
-Creación de repositorio en Github
-Esqueleto del código general

*/

//----------------------------------------------------------------------------
//Se  importan librerías y las clases
#include <iostream>
#include <vector>
#include <limits>

#include "VIDEO.h"
#include "SERIE.h"
#include "EPISODIO.h"
#include "PELICULA.h"


using namespace std;
//----------------------------------------------------------------------------
//Creación de clase main
int main(){

    //Se llaman ejemplos de la funcionalidad del código:
    //video* ej1=new pelicula("Los Minions","Fantasía",120.0f,1);
    //ej1->showInfo();
    //cout<<"----------SERIE---------------"<<endl;

    //video* ej2=new serie("Breaking Bad","Suspenso",340.0f,2,10,7);
    //ej2->showInfo();
    //cout<<"-------------EPISODIO----------------"<<endl;

    //video* ej3=new episodio("Breaking Bad","Suspenso",340.0f,2,10,7,"Episodio1",2);
    //ej3->showInfo();


//-------------------------------- SOLICITUD DE REGISTRO ---------------------

    //Opción para el menú
    int op_gen;
    int op,opDes;
    vector<pelicula*> peliculas;
    vector<serie*> series;
    vector<episodio*> episodios;

    //Se inicializa un menú para que el usuario ingrese lo que quiera
    do{
        cout<<"-------------------------------------------------------"<<endl;
        cout<<"---------------REGISTRO DE PELÍCULAS/SERIES------------"<<endl;
        cout<<"-------------------------------------------------------"<<endl;


        cout<<"Selecciona una opción: "<<endl;
        cout<<"1. Registro de alguna serie o película "<<endl;
        cout<<"2. Visualizar todos los registros"<<endl;
        cout<<"3. Salir"<<endl;
        cin>>op_gen;
        cin.ignore();

        if (op_gen==1){
            //atributos
            string nombre;
            string genero;
            float duracion;
            int id;
            float calificacion;

            //Atributos para los métodos de serie
            int numEpisodios;
            int temporadas;

            //Atributos para los métodos de episodio
            string titulo;
            int ubiTemporada;

            //////////////////////////////////////////////////////
            cout<<"¿Qué formato deseas registrar?"<<endl;
            cout<<"1. Película"<<endl;
            cout<<"2. Serie"<<endl;
            cout<<"3. Episodio"<<endl;
            cin>>op;
            cin.ignore();
             //REGISTRO DE PELÍCULA...........................................
            if (op==1){
                cout<<"======== PELÍCULAS ========="<<endl;
                cout<<"Nombre: "<<endl;
                getline(cin,nombre);
                cout<<"Género: "<<endl;
                getline(cin,genero);
                cout<<"Duración: "<<endl;
                cin>>duracion;
                cin.ignore();
                cout<<"ID: "<<endl;
                cin>>id;
                cin.ignore();
                cout<<"Calificación dada por los usuarios: "<<endl;
                cin>>calificacion;
                cin.ignore();

                //SE IMPLEMENTA CASO DE ERROR:
                if(cin.fail()){
                    cin.clear();
                    pelicula error(nombre, genero, duracion, calificacion, id);
                    error.errorFunctionn();
                    error.errorFunctionn(1);
                    cin.ignore(numeric_limits<streamsize>::max());
                }

                //Desplazamos el registro recién creado
                peliculas.push_back(new pelicula(nombre,genero,duracion,calificacion,id));
                cout<<"Registro completado"<<endl;
            }
            if (op==2){
                cout<<"======== SERIES ========="<<endl;
                cout<<"Nombre: "<<endl;
                getline(cin,nombre);
                cout<<"Género: "<<endl;
                getline(cin,genero);
                cout<<"Duración: "<<endl;
                cin>>duracion;
                cin.ignore();
                cout<<"Número de temporadas: "<<endl;
                cin>>temporadas;
                cin.ignore();
                cout<<"Número de episodios (por temporada):"<<endl;
                cin>>numEpisodios;
                cin.ignore();
                cout<<"ID: "<<endl;
                cin>>id;
                cin.ignore();
                cout<<"Calificación proporcionada por los usuarios: "<<endl;
                cin>>calificacion;
                cin.ignore();

                //SE IMPLEMENTA CASO DE ERROR:
                if(cin.fail()){
                    cin.clear();
                    serie error(nombre,genero,duracion,id,temporadas,numEpisodios,calificacion);
                    error.errorFunctionn();
                    //Error pero también con el código correspondiente
                    error.errorFunctionn(2);
                    cin.ignore(numeric_limits<streamsize>::max());
                }

                //Desplazamos el registro recién creado
                series.push_back(new serie(nombre,genero,duracion,id,temporadas,numEpisodios,calificacion));
                cout<<"Registro completado"<<endl;
            }
            if(op==3){
                cout<<"======== EPISODIO ========="<<endl;
                cout<<"Nombre de la serie: "<<endl;
                getline(cin,nombre);
                cout<<"Género: "<<endl;
                getline(cin,genero);
                cout<<"Duración: "<<endl;
                cin>>duracion;
                cin.ignore();
                cout<<"Número de temporada: "<<endl;
                cin>>temporadas;
                cin.ignore();
                cout<<"Número de episodios totales de la temporada:"<<endl;
                cin>>numEpisodios;
                cin.ignore();
                cout<<"Nombre del episodio: "<<endl;
                getline(cin,titulo);
                cout<<"Número de capitulo (dentro de la temporada): "<<endl;
                cin>>ubiTemporada;
                cin.ignore();
                cout<<"ID: "<<endl;
                cin>>id;
                cin.ignore();
                cout<<"Calificación proporcionada por los usuarios (1 a 5): "<<endl;
                cin>>calificacion;
                cin.ignore();

                //SE IMPLEMENTA CASO DE ERROR:
                if(cin.fail()){
                    cin.clear();
                    serie error(nombre,genero,duracion,id,temporadas,numEpisodios,calificacion);
                    error.errorFunctionn();
                    error.errorFunctionn(3);
                    cin.ignore(numeric_limits<streamsize>::max());
                }

                //Desplazamos el registro recién creado
                episodios.push_back(new episodio(nombre,genero,duracion,id,temporadas,numEpisodios,titulo,ubiTemporada,calificacion));
                cout<<"Registro completado"<<endl;

            }
        }
        else if (op_gen==2){
            cout<<"=============== REGISTROS COMPLETOS ================"<<endl;
            cout<<"¿Qué registro quieres desplegar?"<<endl;
            cout<<"1.Películas"<<endl;
            cout<<"2.Series"<<endl;
            cout<<"3.Epsidios registrados"<<endl;
            cout<<"4.Todos los registros"<<endl;
            cin>>opDes;
            cin.ignore();
            //SE EMPIEZAN LAS OPCIONES PARA DESPLEGAR.........................
            if (opDes==1){
                for (size_t i=0; i< peliculas.size(); i+=1){
                    peliculas[i]->showInfo();
                    cout<<"==================================================="<<endl;
                }
            }
            if (opDes==2){
                for (size_t i=0; i< series.size(); i+=1){
                    series[i]->showInfo();
                    cout<<"==================================================="<<endl;
                }
            }
            if (opDes==3){
                for (size_t i=0; i< episodios.size(); i+=1){
                    episodios[i]->showInfo();
                    cout<<"==================================================="<<endl;
                }
            } 
            if (opDes==4){
                cout<<"======================== PELICULAS =========================="<<endl;
                for (size_t i=0; i< peliculas.size(); i+=1){
                    peliculas[i]->showInfo();
                    cout<<"==================================================="<<endl;
                }

                cout<<"======================== SERIES =========================="<<endl;
                for (size_t i=0; i< series.size(); i+=1){
                    series[i]->showInfo();
                    cout<<"==================================================="<<endl;
                }

                cout<<"======================== EPISODIOS =========================="<<endl;
                for (size_t i=0; i< episodios.size(); i+=1){
                    episodios[i]->showInfo();
                    cout<<"==================================================="<<endl;
                }
            }
        }

    } 
    //Se sigue ejecutando siempre y cuando la opción NO sea 0.
    while (op_gen !=3);



return(0);
}