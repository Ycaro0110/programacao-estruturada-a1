#include <stdio.h>

void main()
{

    int x, d = 0, j;

    // contagem de divisores

    printf("Digite 11 numeros: \n");

    int vetor[11];

    for (int y = 0; y < 11; y++)
    {
        scanf("%d", &vetor[y]);
    }

    for (int y = 0; y < 11; y++)
    {
        do
        {
            vetor[y]++;
            d = 0;

            for (int i = vetor[y]; i > 0; i--)
            {
                if (vetor[y] % i == 0)
                {
                    d++;
                }
            }

        } while (d != 2);

        vetor[y] = vetor[y];
    }

    for (int y = 0; y < 11; y++)
    {
        printf("%d ", vetor[y]);
    }
}

