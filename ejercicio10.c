// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    // Implementar algoritmo de ordenamiento aquí
    for (int j = 0; j < tamaño - 1; j++) {
        for (int i = 0; i < tamaño - 1 - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                int c = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = c;
            }
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo
    printf("Arreglo original\n");
    for (int i = 0; i < 5; i++) {
        printf("numero[%d]: %d\n", i, arr[i]);
    }
    ordenarBurbuja(arr, 5);
    printf("Arreglo ordenado menor a mayor\n");
    for (int i = 0; i < 5; i++) {
        printf("numero[%d]: %d\n", i, arr[i]);
    }

    return 0;
}
