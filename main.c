// 2 - Contar o número de caractreres de uma string.

#include <stdio.h>

int main()

{
    char texto[200];
    int i = 0, palavras = 0, em_palavra = 0;

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    while(texto[i] != '\0')
    {
        if((texto[i] != ' ') && (texto[i] != '\n') && (em_palavra == 0))
        {
            em_palavra = 0;
            palavras++;
        } else if(texto[i] == ' '|| texto[i] == '\n')
        {
        em_palavra = 0;
        }
        i++;
    }
    printf("Quatidade de palavras: %d\n", palavras);

    return 0;
}
