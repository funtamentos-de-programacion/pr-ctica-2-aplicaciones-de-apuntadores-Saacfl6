// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tamaño) {
    // Implementar la suma aquí
    int suma = 0;
    for (int i = 0; i < tamaño; i++)
        suma += arr[i];
    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    // Código para calcular y mostrar la suma
    int sumanum;
    for (int i = 0; i < 5; i++) {
        printf("numero[%d]: %d\n", i, numeros[i]);
    }
    printf("\n");
    sumanum=sumaArreglo(numeros, 5);
    printf("Suma de los numeros del arreglo = %d", sumanum);
    return 0;
}
