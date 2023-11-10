#include <stdio.h>

// Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)

int main()
{
    FILE *arq;

    char nomeArquivo[21];

    int vogais = 0, consoantes = 0;

    printf("Digite o nome do arquivo\n");
    scanf("%20s", nomeArquivo);

    arq = fopen(nomeArquivo, "r");

    if (arq == NULL)
        printf("Esse arquivo não existe.\n");
    else
    {
        do
        {
            char c = fgetc(arq);
            printf("%c", c);

            if (c == EOF)
                break;

            if (c == 'a' | c == 'A' | c == 'e' | c == 'E' | c == 'i' | c == 'I' | c == 'o' | c == 'O' | c == 'u' | c == 'u')
                vogais++;
            else
                consoantes++;
        } while (1);
        printf("O documento contém %d vogais\n", vogais);
        printf("O documento contém %d consoantes\n", consoantes);
    }
    
    return 1;
}
