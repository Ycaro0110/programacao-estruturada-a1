#include <stdio.h>

void main()
{

    int matriz1[4][3], matriz2[3][4], matrizResultado[4][4], i, j,x;

    printf("Digite os valores da matriz 1: ");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d] [%d]", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite a segunda matriz\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%d] [%d]", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            matrizResultado[i][j] = 0;
            for (x = 0; x < 3; x++)
            {
               matrizResultado[i][j] += matriz1[i][x] * matriz2[x][j];
            }                  
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }
}