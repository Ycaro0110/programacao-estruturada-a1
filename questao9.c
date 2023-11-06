/*9. Mostre qual letra aparece mais vezes.*/

#include <stdio.h>

void main()
{

    char palavra[50], caractere, letraMaisFrequente;
    int frequencia[26] = {0}, i, indice, maxFrequencia = 0;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
     for (i = 0; i < palavra[i]; i++)
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            palavra[i] += 32;
        }
    }
    
    for (i = 0; palavra[i] != '\0'; i++)
    {
        caractere = palavra[i];
        if (caractere >= 'a' && caractere <= 'z')
        {
            indice = caractere - 'a';
            frequencia[indice]++;
            if (frequencia[indice] > maxFrequencia)
            {
                maxFrequencia = frequencia[indice];
                letraMaisFrequente = caractere;
            }
        }
    }
    if (maxFrequencia > 1)
    {
        printf("A letra que aparece mais vezes na palavra são '%c' (%d vezes).\n", letraMaisFrequente, maxFrequencia);
    }
    else
    {
        printf("Nenhuma letra se repete na palavra.\n");
    }
}
