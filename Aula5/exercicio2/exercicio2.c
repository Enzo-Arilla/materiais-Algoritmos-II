#include <stdio.h>
#include <string.h>

int main() {

    char linha[50];
    char substring[20];
    int i;
    char *primeiraOcorrencia;

    printf("Digite a substring: ");
    fgets(substring, 20, stdin);

    for (i = 0; i < strlen(substring); i++)
    {
        if (substring[i] == '\n')
        {
            substring[i] = '\0';
            break;
        }
    }

    i = 0;
    FILE* arquivoLeitura = fopen("exercicio2.txt", "r");

    while(fgets(linha, 50, arquivoLeitura) != NULL)
    {
        i += 1;
        primeiraOcorrencia = strstr(linha, substring);
        if (primeiraOcorrencia != NULL)
            break;
    }
    
    if (primeiraOcorrencia != NULL)
        printf("A primeira ocorrencia ocorre em: %d", i);
    else
        printf("Nao existe a substring informada no arquivo!");

    return 0;
}