/*5. Faça com que o vetor só possua números ímpares (subtraindo 1 apenas dos valores pares).*/

#include <stdio.h>

void main()
{

    int vetor[11], i, j, tamanho = 11;
    printf("Insira 11 valores: \n");

    for (i = 0; i < 11; i++)
    {
        printf("%d: ", i);
        scanf(" %d", &vetor[i]);
    }

    for (i = 0; i < 11; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetor[i] -= -1;
        }
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("%d - ", vetor[i]);
    }
}
