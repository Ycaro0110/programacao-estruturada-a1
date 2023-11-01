/*4. Ordene o vetor em ordem decrescente e mostre o vetor.*/

#include <stdio.h>

void main()
{

    int vetor[11], i, j, copia = 0, tamanho = 11;
    printf("Insira 11 valores: \n");

    for (i = 0; i < 11; i++)
    {
        printf("%d: ", i);
        scanf(" %d", &vetor[i]);
    }

    for (i = 0; i < tamanho; i++)
    {
        for (j = i + 1; j < tamanho; j++)
        {
            if (vetor[i] < vetor[j])
            {
                copia = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = copia;
            }
        }
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("%d - ", vetor[i]);
    }
}
