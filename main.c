/*EP1 - Estatística Básica
 Larissa de Souza Silva*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int N, i, m;
    float valorMin=9999, valorMax=0;
    float media, mediana, desvioPadrao,varia;
    float num[100], t=0, soma=0;

    printf("Quantos números na sua série (N):\n");
    scanf("%d", &N);

    for(i=0; i<N; i++){
        printf("Entre com números:\n");
        scanf("%f", &num[i]);

        if(num[i]<valorMin) valorMin=num[i]; //função para valor mínimo

        if(num[i]>valorMax) valorMax=num[i]; //função para valor máximo

        soma += num[i]; //soma para calcular a média

        media = soma/N; //cálculo da média

        varia += pow((num[i]-media), 2)/N; //variância para calcular o desvio padrão

        desvioPadrao = sqrt(varia); //desvio padrão
    }
    //mediana
    for(i=0; i<N; i++){
        for(m=i+1; m<N; m++){
            if(num[i]>num[m]){
               t = num[i];
               num[i]=num[m];
               num[m]=t;
               }
        }
    }
               if (N%2==0)
                mediana=(num[(i-1)/2] + num[i/2])/2;
               else
                mediana = num[(i/2)];

    printf("Valor Mínimo = %.2f\n, Valor Máximo = %.2f\n",valorMin,valorMax);
    //printf("Soma = %.2f\n",soma);
    printf("Média = %.2f\n", media);
    printf("Mediana = %.2f\n", mediana);
    //printf("Variância = %f\n",varia);
    printf("Desvio Padrão = %.13f\n", desvioPadrao);

}
