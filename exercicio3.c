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
    char cidade[40], arquivo[20];

    printf("Informe o nome do arquivo .txt: ");
    gets(arquivo);

    printf("\n - - - Leitura das Cidades - - - \n\n");

    arq = fopen(arquivo, "r");

    if (arq == NULL)
    {
        printf("Falha na abertura do arquivo\n");
    }
    else
    {
        while (fgets(cidade, 100, arq))
        {
            printf("%s", cidade);
        }
    }
    printf("\n\n Programa encerrado... \n");
    fclose(arq);

    return 0;
}
