#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanhoArray, quantidadeConsultas;
    if (scanf("%d %d", &tamanhoArray, &quantidadeConsultas) != 2) return 0;

    int *array = malloc(tamanhoArray * sizeof(int));
    if (!array) return 0;

    for (int indice = 0; indice < tamanhoArray; indice++) {
        scanf("%d", &array[indice]);
    }

    while (quantidadeConsultas--) {
        int alvo;
        scanf("%d", &alvo);

        int esquerda = 0, direita = tamanhoArray - 1;
        int resposta = -1;

        while (esquerda <= direita) {
            int meio = esquerda + (direita - esquerda) / 2;

            if (array[meio] < alvo) {
                esquerda = meio + 1;
            } else {
                if (array[meio] == alvo) {
                    resposta = meio; 
                }
                direita = meio - 1;
            }
        }
        printf("%d\n", resposta);
    }

    free(array);
    return 0;
}
