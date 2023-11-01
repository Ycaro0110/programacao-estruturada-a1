/*8. Transforme todas as vogais em letras maiúsculas.*/

#include <stdio.h>

void main()
{
    int i, tamanho = 50;
    char palavra[tamanho];

    printf("Insira uma palavra: ");

    scanf(" %s", palavra);

    for (i = 0; i < tamanho; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            palavra[i] -= 32;
        }
    }

    printf("O vetor é: ");

    printf("%s ", palavra);

  
}
