/***********************************************************
 * Fecha: 05-Agosto-2022
 * Autor: Kevin Fabian Chepe
 * Materia: PHC I
 * Tema: Introducción Leguaje de Programación C++
 * Tópico: Primer Taller C++ (10)
 ***********************************************************/

#include <stdio.h>
#include <iostream>

int main() {
    int n = 0;
    int s = 0, s_1 = 0;
    int r = 0, r_1 = 0;
    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;
    int vector [n];

    for(int i = 0; i <= n; i++){
        vector[i] = i;
        s = s + vector[i];
    }
    
    for(int i = 0; i <= n + 1; i++){
        if(s != s_1){
            s = s - vector[n - i];
            if(s_1 == s){
                r = i - 1;
                r_1 = i + 1;
                break;
            }
            s_1 = s_1 + vector[n - i];
        }
    }

    if(s != s_1){
        std::cout << "No existe centro numerico con el numero n"<<std::endl;
    }else{
        std::cout << "El primer grupo de numeros es: ";
        for(int i = 1; i <= n - r_1; i++){
            std::cout << i << " ";
        }
    
        std::cout << "\nEl segundo grupo de numeros es: ";
        for(int i = n - r; i <= n; i++){
            std::cout << i << " ";
        }

        std::cout << "\nLa suma de cada grupo es de : " << s << std::endl;
    }


}
