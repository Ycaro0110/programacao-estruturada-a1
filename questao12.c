/*12. Preencha uma matriz de inteiros 3x3 com números digitados pelo usuário e calcule sua determinante.*/
#include <stdio.h>

void main()
{
    int matriz1[3][3], i, j, x, p1, p2, p3, s1, s2, s3, determinante;

    printf("Insira a matriz 1: ");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d][%d]", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    p1 = matriz1[0][0] * matriz1[1][1] * matriz1[2][2];
    p2 = matriz1[0][1] * matriz1[1][2] * matriz1[2][0];
    p3 = matriz1[0][2] * matriz1[1][0] * matriz1[2][1];

    s1 = matriz1[0][2] * matriz1[1][1] * matriz1[2][0];
    s2 = matriz1[0][0] * matriz1[1][2] * matriz1[2][1];
    s3 = matriz1[0][1] * matriz1[1][0] * matriz1[2][2];

    determinante = (p1+p2+p3) - (s1+s2+s3);

    printf("%d \n", determinante);
}

