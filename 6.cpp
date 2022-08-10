/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (6)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

int main(){

	int a=0, b=0, flag=0, suma=0, cont=0;
	
	
	std::cout<< "Digite el valor de a (Mayor que 0):"<< std::endl;
	std::cin >> a;
	
	std::cout<< "Digite el valor de b (Mayor que 0):"<< std::endl;
	std::cin >> b;
	
	if(a < 0 || b < 0){
        	std::cout << "Porfavor ingrese valores positivos " << std::endl;
        	system("pause");
        }else if(a>b){
		flag=a;
		a=b;
		b=flag;
	}
	
	for (int i=a; i<=b; i++){
		if(i%5 == 0){
			cont++;
			suma=suma+i;
		}
	}
	
	std::cout<< "La suma es: " <<suma<<std::endl;

}

