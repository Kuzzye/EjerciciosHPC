/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (4)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

int main(){

	int x = 0, y = 0;
	for (x = 6; x > 0; x -= 2){
		for (y = 0; y < 2; y++){
			std::cout<<"*"<<(x-y)<<std::endl;
		}
	}
	return 0;
}

