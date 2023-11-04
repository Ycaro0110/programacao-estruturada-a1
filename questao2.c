/*2. Mostre o menor e o maior valor do vetor e a quantidade de números positivos e negativos.*/

#include <stdio.h>

void main()
{

    int vetor[11], i, contaPositivo = 0, contaNegativo = 0, maior, menor;
    printf("Insira 11 valores: \n");

    for (i = 0; i < 11; i++)
    {
        printf("%d: ", i);
        scanf(" %d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    
    for (i = 0; i < 11; i++)
    {
        if (vetor[i] > 0)
        {
            contaPositivo++;
        }
        else
        {
            contaNegativo++;
        }
    }

    for (i = 0; i < 11; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    printf("Numeros positivos: %d\nNúmeros negativos: %d \nMaior número: %d \nMenor número: %d \n", contaPositivo, contaNegativo, maior, menor);
}
