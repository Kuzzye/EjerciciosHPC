/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (7)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

int main(){

	double a=0, b=0, x=0, y=0;
	double suma=0;
	double valor=0;
	
	
	std::cout<< "Introduce el valor de x:"<< std::endl;
	std::cin >> x;
	
	std::cout<< "Introduce el valor de y:"<< std::endl;
	std::cin >> y;
	
	std::cout<< "Introduce el valor de b:"<< std::endl;
	std::cin >> b;
	
	for (int a=0; a<=b; a++){
		valor=1/(x+a*y);
		suma=suma+valor;
	}
	
	std::cout<< "La sumatoria es: " <<suma<<std::endl;

}

