#include <stdio.h>

void PasoValorReferencia(int *array, int valor) {
    array[5]=-8.6;
    valor=4;
}

int main() {
    int array[10] = {0,0,0,0,0,0,0,0,0,0};
    PasoValorReferencia(array, array[3]);
    printf("Array[5] vale: %i y array[3] vale: %i\n", array[5], array[3]);
    return 0;
}