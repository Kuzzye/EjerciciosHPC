/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (8)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

int suma(int fecha){
    int suma=0;
    while (fecha>0){
        suma = suma+ fecha%10;
        fecha = fecha/10;
    }
    return suma;
}

int main(){

	int d, m, a, combinar=0, separar=0, tarot=0;
	
	
	std::cout<< "Ingrese el dia en que nacio:"<< std::endl;
	std::cin >> d;
	
	std::cout<< "Ingrese el mes en que nacio:"<< std::endl;
	std::cin >> m;
	
	std::cout<< "Ingrese el año en que nacio:"<< std::endl;
	std::cin >> a;
	
	combinar = d + m + a;
    	separar = suma(combinar);
    	tarot = suma(separar);
	std::cout<<"Su numero de tarot es: "<<tarot<<std::endl;
	
}

