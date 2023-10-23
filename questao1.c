#include <stdio.h>

void main()
{

    int vetor[11], i, posicao1, posicao2,contador = 0;
    float media;
    printf("Insira 11 valores: \n");
 
    for (i = 0; i < 11; i++)
    {   printf("%d: ", i);
        scanf(" %d", &vetor[i]);
    }

    printf("Digite 2 posições do vetor: \n");
    scanf(" %d", &posicao1);
    scanf(" %d", &posicao2);

    for (i = posicao1; i <= posicao2; i++)
    {
        media += vetor[i];
        contador++;
    }

    media /= contador;

    printf("A media entre as posições %d e %d é : %.2f", posicao1, posicao2, media);
}