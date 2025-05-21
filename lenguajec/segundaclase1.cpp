#include <stdio.h>

int main() {
    int A, B;
    int result = 1;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);
    
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    if (B == 0) {
        result = 1; // Cualquier número elevado a 0 es 1
    } else if (B > 0) {
        result *= A;
        if (B > 1) {
            result *= A;
            if (B > 2) {
                result *= A;
                if (B > 3) {
                    result *= A;
                    if (B > 4) {
                        result *= A;
                    }
                }
            }
        }
    } else {
        if (A != 0) {
            result /= A;
            if (B < -1) {
                result /= A;
                if (B < -2) {
                    result /= A;
                    if (B < -3) {
                        result /= A;
                        if (B < -4) {
                            result /= A;
                        }
                    }
                }
            }
        } else {
            printf("Error: No se puede dividir por cero.\n");
            return 1;
        }
    }

    printf("%d elevado a la potencia %d es igual a %d\n", A, B, result);

    return 0;
}

