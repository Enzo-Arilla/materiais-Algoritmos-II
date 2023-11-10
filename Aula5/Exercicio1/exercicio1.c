#include <stdio.h>
#include <string.h>

// Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)

int main(){ 

    FILE *arq;

    char novaString[100];
    
    // printf("Digite o nome do arquivo\n");
    // scanf("%20s", nomeArquivo);

    arq = fopen("exe1.txt", "r");
    int i =0;

    if (arq == NULL)
        printf("Esse arquivo não existe no sistema.\n");
    else {
        do
        {
            char c = fgetc(arq);

            if (c == EOF)
                break;

            if (c >= 97 && c <=122) {
                novaString[i] = (char ) c - 32;
            }else
                novaString[i] = c;
            i++;
 
        } while (1);
    }

    fclose(arq);
    arq = fopen("exe1.txt", "w");
    fclose(arq);

    arq = fopen("exe1.txt", "r+");
    fprintf(arq, "%s", novaString);
    fclose(arq);

return 0;
}