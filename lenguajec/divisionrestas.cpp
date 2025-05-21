#include <stdio.h>

// Función recursiva para calcular la división entera de a entre b
int division(int a, int b) {
    // Caso base: Si el dividendo es menor que el divisor, el cociente es 0
    if (a < b) {
        return 0;
    } else {
        // Restamos b de a y llamamos recursivamente a la función division
        // Incrementamos en 1 el resultado de la llamada recursiva
        return division(a - b, b) + 1;
    }
}

int main() {
    int dividend, divisor;
    
    // Pedimos al usuario que ingrese los valores para el dividendo y el divisor
    printf("Ingrese el dividendo: ");
    scanf("%d", &dividend);

    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    // Llamamos a la función division y mostramos el resultado
    printf("El cociente de %d dividido por %d es: %d\n", dividend, divisor, division(dividend, divisor));

    return 0;
}