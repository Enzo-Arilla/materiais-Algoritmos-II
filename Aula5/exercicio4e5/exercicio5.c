#include <stdio.h>
#include <string.h>

int main() {

    int idade, numeroMedalhas, i = 0;
    int maiorIdade = 0, maiorMedalhas = 0;
    char nomes[5][50];

    char linha[100];
    int idades[5], medalhas[5];

    FILE* arquivoAtletas = fopen("atletas.txt", "r");

    while(fgets(linha, 100, arquivoAtletas) != NULL)
    {
        sscanf(linha, "Nome: %19[^|] |%*[^0-9]%d | %*[^0-9]%d", nomes[i], &idades[i], &medalhas[i]);
        i++;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", nomes[i]);
        printf("%d\n", idades[i]);
        printf("%d\n\n", medalhas[i]);
    }

    /*
    for (i = 0; i < 5; i++)
    {
        if (idades[i] > maiorIdade)
            maiorIdade = idades[i];
        if (medalhas[i] > maiorMedalhas)
            maiorMedalhas = medalhas[i];
    }

    for (i = 0; i < 5; i++)
    {
        if (maiorIdade == idades[i])
            printf("O nome do atleta mais velho eh: %s\n", nomes[i]);
        if (maiorMedalhas == medalhas[i])
            printf("O nome do atleta com mais medalhas eh: %s\n", nomes[i]);
    }
    */

    return 0;
}