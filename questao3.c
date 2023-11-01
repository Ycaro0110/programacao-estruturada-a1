/*3. Alterar cada valor do vetor pelo próximo número primo depois daquele valor.*/

#include <stdio.h>

int main()
{
    int vetor[11], i;

    printf("Insira 11 valores: \n");

    for (i = 0; i < 11; i++)
    {
        printf("Vetor %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 11; i++)
    {
        int num = vetor[i] + 1; // Começa com o próximo número após o valor atual

        while (1)
        {
            int is_prime = 1;

            for (int x = 2; x * x <= num; x++)
            {
                if (num % x == 0)
                {
                    is_prime = 0; // Não é primo
                    break;
                }
            }

            if (is_prime)
            {
                vetor[i] = num; // substitui pelo próximo número primo
                break;
            }

            num++; // tenta o próximo número
        }
    }

    printf("Vetor com próximos números primos:\n");
    for (i = 0; i < 11; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
