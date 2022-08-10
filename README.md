# EjerciciosHPC

1) ¿Cuál es el resultado del siguiente programa?
#include <stdio.h>
main()
{
int x = 1, y = 1;
if (x = y * 5)
x = 0;
else
x = -1;
printf("%d\n", x);
}
2) ¿Cuál es el resultado del siguiente programa?
#include <stdio.h>
main()
{
int x = 1, y = 1;
if (x == 1)
if (y == 0)
x = 10;

else
x = -1;
printf("%d\n", x);
}
3) ¿Cuál es el resultado del siguiente programa?
#include <stdio.h>
main()
{
int x = 0;
for (x = 'a'; x <= 'z'; x += 10)
{
printf("%c ", x);
}
}

4) ¿Cuál es el resultado del siguiente programa?
#include <stdio.h>
main()
{
int x = 0, y = 0;
for (x = 6; x > 0; x -= 2)
for (y = 0; y < 2; y++)
printf("%d ", x-y);

}
5) ¿Cuál es el resultado del siguiente programa?
#include <stdio.h>
void fnx(int x)
{
if (x) printf("%d ", x);
}
main() {
int i, a = 1234;
for (i = 0; i < 4; i++)
fnx(a = a/10);

}
6) Realizar un programa que calcule e imprima la suma de los múltiplos de 5
comprendidos entre dos valores a y b. El programa no permitirá introducir valores
negativos para a y b, y verificará que a es menor que b. Si a es mayor que b,
intercambiará estos valores.
7) Realizar un programa que permita evaluar la serie:

8) Si quiere averiguar su número de Tarot, sume los números de su fecha de naci-
miento y a continuación redúzcalos a un único dígito; por ejemplo si su fecha de

nacimiento fuera 17 de octubre de 1992, los cálculos a realizar serían:
17 + 10 + 1992 = 2019 => 2 + 0 + 1 + 9 = 12 => 1 + 2 = 3

lo que quiere decir que su número de Tarot es el 3.

Realizar un programa que pida una fecha, de la forma:
día mes año

donde día, mes y año son enteros, y dé como resultado el número de Tarot. El
programa verificará si la fecha es correcta, esto es, los valores están dentro de los
rangos permitidos.
9) Realizar un programa que genere la siguiente secuencia de dígitos:

• El número de filas estará comprendido entre 11 y 20 y el resultado aparecerá
centrado en la pantalla como se indica en la figura.

10) Un centro numérico es un número que separa una lista de números enteros (co-
menzando en 1) en dos grupos de números, cuyas sumas son iguales. El primer

centro numérico es el 6, el cual separa la lista (1 a 8) en los grupos: (1, 2, 3, 4, 5) y
(7, 8) cuyas sumas son ambas iguales a 15. El segundo centro numérico es el 35, el
cual separa la lista (1 a 49) en los grupos: (1 a 34) y (36 a 49) cuyas sumas son

ambas iguales a 595. Escribir un programa que calcule los centros numéricos en-
tre 1 y n.
