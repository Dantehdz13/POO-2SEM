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

#include "VIDEO.h"
#include "SERIE.h"
#include "EPISODIO.h"
#include "PELICULA.h"


using namespace std;
//----------------------------------------------------------------------------
//Creación de clase main
int main(){

    //Se llaman ejemplos de la funcionalidad del código:
    video* ej1=new pelicula("Los Minions","Fantasía",120.0f,1);
    ej1->showInfo();
    cout<<"----------SERIE---------------"<<endl;

    video* ej2=new serie("Breaking Bad","Suspenso",340.0f,2,10,7);
    ej2->showInfo();
    cout<<"-------------EPISODIO----------------"<<endl;

    video* ej3=new episodio("Breaking Bad","Suspenso",340.0f,2,10,7,"Episodio1",2);
    ej3->showInfo();


return(0);
}