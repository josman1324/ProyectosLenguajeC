#include <stdio.h>

int main() {
    int A, B;
    int cociente = 0;
    int residuo = 0;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);
    
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    if (B != 0) {
        if (A >= B) {
            A -= B;
            cociente++;
        }
        if (A >= B) {
            A -= B;
            cociente++;
        }
        if (A >= B) {
            A -= B;
            cociente++;
        }
        if (A >= B) {
            A -= B;
            cociente++;
        }
        if (A >= B) {
            A -= B;
            cociente++;
        }
        residuo = A;
        printf("El cociente es: %d\n", cociente);
        printf("El residuo es: %d\n", residuo);
    } else {
        printf("Error: No se puede dividir por cero.\n");
    }

    return 0;
}
