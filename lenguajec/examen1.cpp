#include <stdio.h>

// Función recursiva para invertir un número
int invertirNumero(int numero, int invertido) {
    // Caso base: cuando el número original es 0, se devuelve el número invertido
    if (numero == 0) {
        return invertido;
    }
    // Se obtiene el último dígito del número original
    int ultimoDigito = numero % 10;
    // Se agrega el último dígito al número invertido
    invertido = invertido * 10 + ultimoDigito;
    // Se llama recursivamente a la función con el número original sin el último dígito
    return invertirNumero(numero / 10, invertido);
}

int main() {
    int entrada, salida;
    printf("Ingrese un número: ");
    scanf("%d", &entrada);
    
    // Se llama a la función recursiva para invertir el número
    salida = invertirNumero(entrada, 0);
    
    printf("El número invertido es: %d\n", salida);
    return 0;
}