// 1 - Contar o número de caracteres de uma string.

#include <stdio.h>

int main()

{
    char texto[100];
    int i = 0, contador = 0;

    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);

    //Contando caracteres até encontrar o '\0' do fgets
    while(texto[i] != '\0')

    {
        contador++;
        //Incrementar o contador
        i++; //Avança para o próximo caractere

    }

    printf("Quantidade de caracteres: %d\n", contador-1);
    // -1 para ignorar o '\n' do fgtes

    return 0;
}
