#ifndef ARRAY_FUNCTIONS_h
#define ARRAY_FUNCTIONS_h

struct{
    int *data;
    int tamanho;
}Array;

int* slice(int array[], int inicio , int fim );

void printArray(int array[], int tamanho) ;

#endif // ARRAYFUNCTIONS_h