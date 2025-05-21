#include <stdio.h>

int main() {
    int dividend, divisor;
    int quotient = 0;
    int remainder = 0;

    printf("Ingrese el dividendo: ");
    scanf("%d", &dividend);
    
    printf("Ingrese el divisor: ");
    scanf("%d", &divisor);

    if (divisor != 0) {
        // Realizamos la división restando el divisor repetidamente
        // hasta que el dividendo sea menor que el divisor.
        if (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }
        if (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }
        if (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }
        if (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }
        if (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }

        remainder = dividend;

        printf("El cociente es: %d\n", quotient);
        printf("El residuo es: %d\n", remainder);
    } else {
        printf("Error: No se puede dividir por cero.\n");
    }

    return 0;
}
