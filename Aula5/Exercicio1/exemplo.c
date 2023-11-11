#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;
    char tempFileName[] = "temp.txt";

    arquivo = fopen("seuarquivo.txt", "r+");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    FILE *temp = fopen(tempFileName, "w");

    if (temp == NULL) {
        printf("Erro ao criar o arquivo temporário.\n");
        fclose(arquivo);
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere >= 'a' && caractere <= 'z') {
            // Converte o caractere minúsculo para maiúsculo
            caractere = caractere - 32;
        }
        fputc(caractere, temp);
    }

    fclose(arquivo);
    fclose(temp);

    remove("seuarquivo.txt"); // Remove o arquivo original
    rename(tempFileName, "seuarquivo.txt"); // Renomeia o arquivo temporário

    printf("Conversão concluída com sucesso!\n");

    return 0;
}
