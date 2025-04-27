#include <stdio.h>

int main(){
    int quantidade;

    scanf("%d", &quantidade);

    if(quantidade < 1 || quantidade > 5){
        return 0;
    }

    int resposta[quantidade];

    for(int i = 0 ; i < quantidade ;i++){

        int tamanho;

        scanf("%d", &tamanho);

        if(tamanho < 1 || tamanho > 100000){
            return 0;
        }

        int array[tamanho];

        int contador = 0;

        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &array[j]);
        }

        for (int j = 1; j < tamanho; j++) {
            int g = j;
            while (g > 0 && array[g] < array[g - 1]) {
                int temp = array[g];
                array[g] = array[g - 1];
                array[g - 1] = temp;

                contador++;
                g--;
            }
        }


        resposta[i] = contador;
    }

    for(int i = 0 ; i < quantidade ;i++){
        printf("%d" , resposta[i]);
        printf("\n");
    }
}