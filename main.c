/*EP1 - Estat�stica B�sica
 Larissa de Souza Silva*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int N, i, m;
    float valorMin=9999, valorMax=0;
    float media, mediana, desvioPadrao,varia;
    float num[100], t=0, soma=0;

    printf("Quantos n�meros na sua s�rie (N):\n");
    scanf("%d", &N);

    for(i=0; i<N; i++){
        printf("Entre com n�meros:\n");
        scanf("%f", &num[i]);

        if(num[i]<valorMin) valorMin=num[i]; //fun��o para valor m�nimo

        if(num[i]>valorMax) valorMax=num[i]; //fun��o para valor m�ximo

        soma += num[i]; //soma para calcular a m�dia

        media = soma/N; //c�lculo da m�dia

        varia += pow((num[i]-media), 2)/N; //vari�ncia para calcular o desvio padr�o

        desvioPadrao = sqrt(varia); //desvio padr�o
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

    printf("Valor M�nimo = %.2f\n, Valor M�ximo = %.2f\n",valorMin,valorMax);
    //printf("Soma = %.2f\n",soma);
    printf("M�dia = %.2f\n", media);
    printf("Mediana = %.2f\n", mediana);
    //printf("Vari�ncia = %f\n",varia);
    printf("Desvio Padr�o = %.13f\n", desvioPadrao);

}
