/*
 * Este programa calcula la suma, resta, multiplicación y división de una pareja de números.
 *
 * Fecha: 21 de agosto de 2018.
 * Autor: Gerardo González Becerril.
 * Correo: A01411981@itesm.mx
 */

#include <stdio.h>

int main() {

    // Declaración de variables.
    double num1;
    double num2;
    double resultado;

    // Solicita los números y guarda el input en las variables correspondientes.
    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

    // Suma los valores y le asigna el resultado a otra variable.
    resultado = num1 + num2;
    // Presenta el resultado.
    printf("La suma de los números es: %lf\n", resultado);
    resultado = num1 - num2;
    printf("La diferencia de los números es: %lf\n", resultado);
    resultado = num1 * num2;
    printf("El producto de los números es: %lf\n", resultado);
    resultado = num1 / num2;
    printf("El cociente de los números es: %lf\n", resultado);
}