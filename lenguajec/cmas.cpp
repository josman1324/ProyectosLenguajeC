#include <stdio.h>

// Función recursiva para dividir 'a' por 'b'
int division(int a, int b, int i) {
    // Caso base: si 'a' es menor que 'b', ya no se puede dividir más
    if (a < b) {
        return i - 1; // Devuelve el acumulador menos 1
    } else {
        return division(a - b, b, i + 1); // Llamada recursiva, decrementa 'a' en 'b' y aumenta el acumulador
    }
}

main() 
{
    int dividendo, divisor;

    // Solicitar al usuario los valores del dividendo y el divisor
    printf("Introduce el dividendo: ");
    scanf("%d", &dividendo);
    printf("Introduce el divisor: ");
    scanf("%d", &divisor);

    // Verificar si el divisor es cero
    if (divisor == 0) {
        printf("Error: No se puede dividir entre cero.\n");
    } else {
        // Llamar a la función de división e imprimir el resultado
        int resultado = division(dividendo, divisor, 0);
        printf("Resultado de la división: %d\n", resultado);
    }

}
