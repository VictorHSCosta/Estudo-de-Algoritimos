#include "array_function.h"
#include <stdlib.h>
#include <stdio.h>

int* slice(int array[], int inicio, int fim) {
    const int tamanho = (fim - inicio + 1);
    int *arrayNova = malloc(tamanho * sizeof(int));

    if (arrayNova == NULL) {
        printf("Erro de memoria!\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++) {
        arrayNova[i] = array[i + inicio];
    }

    return arrayNova;
}

void printArray(int array[], int tamanho){
    if (array == NULL){
        printf(" ");
        return;
    }

    for(int i = 0 ; i < tamanho ; i++){
        printf("%d" ,  array[i]);
    }

    return;
}
