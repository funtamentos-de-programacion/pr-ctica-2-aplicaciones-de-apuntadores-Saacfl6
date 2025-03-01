// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int arr[] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados
    printf("Valores Originales\n*a: %p   a= %d\n*b: %p   b= %d\n", &arr[0], arr[0], &arr[1], arr[1]);
    intercambiar(&arr[0], &arr[1]);
    printf("Valores Intercambiados\n*a: %p   a= %d\n*b: %p   b= %d\n", &arr[0], arr[0], &arr[1], arr[1]);
    return 0;
}
