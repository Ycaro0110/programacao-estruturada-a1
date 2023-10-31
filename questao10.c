#include <stdio.h>

void main()
{

    int matriz[5][5], i, j, diagonalPrincipal = 0, diagonalSecundaria = 0;

    printf("Digite os valores da matriz 5x5: ");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d] [%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                diagonalPrincipal += matriz[i][j];
            }
            if (i + j == 4)
            {
                diagonalSecundaria += matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d \n", diagonalPrincipal);
    printf("Media da diagonal secundária: %d\n", diagonalSecundaria / 5);
}