#include <stdio.h>
#include <string.h>

void removeCaracterString(char *string);

int main() {

    int i;

    typedef struct {

        char nome[50];
        char esporte[50];
        int idade;
        int numeroMedalhas;

    } Atleta;

    Atleta atletas[5];

    for (i = 0; i < 5; i++)
    {
        printf("Atleta %d", i+1);
        printf("\nDigite o nome: ");
        fgets(atletas[i].nome, 50, stdin);
        removeCaracterString(atletas[i].nome);
        setbuf(stdin, NULL);
        printf("Digite o esporte: ");
        fgets(atletas[i].esporte, 50, stdin);
        removeCaracterString(atletas[i].esporte);
        printf("Digite a idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Digite o numero de medalhas: ");
        scanf("%d", &atletas[i].numeroMedalhas);
        setbuf(stdin, NULL);
        printf("\n");
    }

    FILE* arquivoAtletas = fopen("atletas.txt", "w+");

    for (i = 0; i < 5; i++)
        fprintf(arquivoAtletas, "Nome: %s | Esporte: %s | Idade: %d | Medalhas: %d\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].numeroMedalhas);
    
    fclose(arquivoAtletas);

    return 0;

}

void removeCaracterString(char *string)
{
    int i;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == '\n')
        {
            string[i] = '\0';
            break;
        }
    }
}
