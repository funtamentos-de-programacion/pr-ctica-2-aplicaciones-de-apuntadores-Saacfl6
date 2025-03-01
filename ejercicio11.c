// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    // Implementar búsqueda aquí
    {
        for (int i = 0; i < tamaño; i++) {
            if (arr[i] == valor) {
                return &arr[i];
            }
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int bus = 30;
    int *busqueda = buscarElemento(arr, tamaño, bus);
    if (busqueda != NULL) {
        printf("Elemento %d encontrado en la direccion %p\n", bus, busqueda);
    }
    else {
        printf("Elemento no encontrado");
    }
    return 0;
}

