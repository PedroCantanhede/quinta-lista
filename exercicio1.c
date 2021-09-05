//Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Ponteiro - aponta a localização do registro existente
    FILE *arq;

    // Declaração das Variáveis
    char caracter;

    arq = fopen("arq.txt", "a");

    while (caracter != '0')
    {
        printf("Informe o caracter para ser colocado no arquivo (Sendo 0 Finalizador): \n");
        fflush(stdin);
        scanf("%c", &caracter);
        fprintf(arq, "%c\n", caracter);
    }

    fclose(arq);

    arq = fopen("arq.txt", "r");

    if (arq == NULL)
    {
        printf("Falha na abertura do arquivo!\n");
        system("pause");
        exit(1);
    }

    printf("\n Programa encerrado... \n");
    fclose(arq);

    return 0;
}
