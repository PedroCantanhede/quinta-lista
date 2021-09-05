//Bibliotecas
#include <stdio.h>
#include <locale.h>

// Função
int contadorString(char str[])
{
    int cont = 0;

    while (str[cont] != '\0')
    {
        cont++;
    }

    return cont;
}

int main()
{
    // Regionalização (Desbuga palavras com acento)
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Ponteiro - aponta a localização do registro existente
    FILE *arq;

    // Declaração das Variáveis
    char string[200], produtos[10][30];
    int cont = 0, i = 0, j, prod;

    arq = fopen("estoque.txt", "r");

    if (arq == NULL)
        printf("Falha na abertura do arquivo\n");
    else
        while (fgets(string, 100, arq))
        {
            strcpy(produtos[cont], string);
            cont++;
        }

    printf("\n - - - Produtos - - - \n\n");

    for (i; i < cont; i++)
    {
        printf("%d  ", i);

        for (j = 1; j < contadorString(produtos[i]); j++)
        {
            printf("%c", produtos[i][j]);
        }
    }

    printf("\n\nInforme o numero do produto desejado: ");
    scanf("%d", &prod);

    if (produtos[prod][0] == 'N')
    {
        printf("\n- Sem estoque");
    }
    else
    {
        printf("\n- Sim, em estoque");
    }

    fclose(arq);

    return 0;
}
