/*7. Mostre quantas consoantes distintas aparecem na palavra.*/

#include <stdio.h>

int main()
{
    char palavra[50], consoantesContadas[26] = {0};
    int consoantesDistintas = 0, i, index, tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; palavra[tamanho] != '\0'; i++)
    {
        tamanho++;
    }

 for (i = 0; i < tamanho; i++)
    {
        if (palavra[i] >= 65 && palavra[i] <= 90)
        {
            palavra[i] += 32;
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        char c = palavra[i];
       
        
        if (c >= 'a' && c <= 'z' && (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'))
        {
            index = c - 'a';

            if (consoantesContadas[index] == 0)
            {
                consoantesDistintas++;
                consoantesContadas[index] = 1;
            }
        }
       
    }
 
    printf("Quantidade de consoantes distintas na palavra: %d\n", consoantesDistintas);

    return 0;
}
