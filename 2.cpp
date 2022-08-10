/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (2)
 ***********************************************************/

#include <stdio.h>
#include <iostream>
int main(){

	int x = 1, y = 1;
	if (x == 1){
		if (y == 0){
			x = 10;
		}
	}else{
		x = -1;
	}
	
	std::cout<<"*"<< x<<std::endl;
	
	return 0;
}
