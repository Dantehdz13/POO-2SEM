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

    //Ejemplo de utilización del programa usando vectores
    //(verifica si ya se corrigió el problema de herencia y demuestra el 
    //polimorfismo)
    video *vector[2];

    //Primer ejemplo, película
    vector[0]= new pelicula("Los Minions","Fantasía",120,0);
    vector[0]->showInfo();


return(0);
}