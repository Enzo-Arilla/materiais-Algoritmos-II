#include <stdio.h>
#include <string.h>

//Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)

void ordenaString(char string[], int N);

int main()
{
    int i, j, controle = 0;
    char string1[30];
    char string2[30];
    
    scanf("%s", string1);
    scanf("%s", string2);
    
    if (strlen(string1) == strlen(string2))
    {
        ordenaString(string1, strlen(string1));
        ordenaString(string2, strlen(string2));
        if (strcmp(string1, string2) == 0)
            printf("Eh um anagrama\n");
        else
            printf("Nao eh um anagrama\n");
    }
    else
        printf("Nao eh um anagrama\n");   

    return 0;
}

void ordenaString(char string[], int N)
{
    int i, j;
    char auxiliar;
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < (N-1); j++)
        {
            if (string[j] > string[j+1])
            {
                auxiliar = string[j];
                string[j] = string[j+1];
                string[j+1] = auxiliar;
            }
        }
    }
}