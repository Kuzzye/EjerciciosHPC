/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (3)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

int main(){

	int x = 0;
	
	for (char x = 'a'; x <= 'z'; x += 10){
		std::cout<<"*"<<x<<std::endl;
	}
	
	return 0;
}


