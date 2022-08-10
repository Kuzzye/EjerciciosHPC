/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (5)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

void fnx(int x){

	if (x){
		std::cout<<"*"<<x<<std::endl;
	}
}

int main(){

	int i, a = 1234;
	
	for (i = 0; i < 4; i++){
		fnx(a = a/10);
	}
	
	return 0;
}

