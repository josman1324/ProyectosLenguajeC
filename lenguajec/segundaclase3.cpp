#include <stdio.h>

int main() {
    int A, B;
    int producto = 0;

    printf("Ingrese el valor de A: ");
    scanf("%d", &A);
    
    printf("Ingrese el valor de B: ");
    scanf("%d", &B);

    if (B > 0) {
        producto = A;
        if (B > 1) {
            producto += A;
            if (B > 2) {
                producto += A;
                if (B > 3) {
                    producto += A;
                    if (B > 4) {
                        producto += A;
                    }
                }
            }
        }
    } else if (B < 0) {
        producto = -A;
        if (B < -1) {
            producto -= A;
            if (B < -2) {
                producto -= A;
                if (B < -3) {
                    producto -= A;
                    if (B < -4) {
                        producto -= A;
                    }
                }
            }
        }
    } else {
        producto = 0; // Si B es 0, el producto es 0
    }

    printf("El producto es: %d\n", producto);

    return 0;
}
