#include <stdio.h>

long long merge_sort(int array[], int inicio, int fim) {
    if (inicio >= fim) return 0;

    long long contador = 0;

    int meio = (inicio + fim) / 2;
    contador += merge_sort(array, inicio, meio );
    contador += merge_sort(array, meio + 1, fim);

    int aux[fim + 1];

    int i = inicio, j = meio + 1, k = inicio;
    for (int p = inicio; p <= fim; p++) {
        aux[p] = array[p];
    }

    while (i <= meio && j <= fim) {
        if (aux[i] <= aux[j]) {
            array[k++] = aux[i++];
        } else {
            array[k++] = aux[j++];
            contador += (meio - i + 1);        
        }
    }

    while (i <= meio) {
        array[k++] = aux[i++];
    }

    return contador;
}

int main() {
    int quantidade;
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 5) {
        return 0;
    }

    int resposta[quantidade];

    for (int i = 0; i < quantidade; i++) {
        int tamanho;
        scanf("%d", &tamanho);

        if (tamanho < 1 || tamanho > 100000) {
            return 0;
        }

        int array[tamanho];

        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &array[j]);
        }

        resposta[i] = merge_sort(array, 0, tamanho - 1);;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("%d\n", resposta[i]);
    }

    return 0;
}
