#include <stdio.h>
#include <stdlib.h>

void merge_sort(int array[], int inicio, int fim) {
    if (inicio >= fim) return;

    int meio = (inicio + fim) / 2;
    merge_sort(array, inicio, meio);
    merge_sort(array, meio + 1, fim);

    int aux[fim];

    int i = inicio, j = meio + 1, k = inicio;
    for (int p = inicio; p <= fim; p++) {
        aux[p] = array[p];
    }

    while (i <= meio && j <= fim) {
        if (aux[i] <= aux[j]) {
            array[k++] = aux[i++];
        } else {
            array[k++] = aux[j++];
        }
    }

    while (i <= meio) {
        array[k++] = aux[i++];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int array[n];

    if (!array) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    merge_sort(array, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
