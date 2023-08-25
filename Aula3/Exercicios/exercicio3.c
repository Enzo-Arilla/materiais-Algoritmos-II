#include <stdio.h>
#include <stdlib.h>

float media(float *mediaIdade, int n);

int main() {
    
    int n = 0;
    float mediaIdade = 0.0;
    int i;
    
    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    
    int *alunos = (int*) malloc(n * sizeof(int));
    
    if (alunos == NULL)
        return 1;
    
    printf("\nDigite as idades:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &alunos[i]); 
        mediaIdade += alunos[i];
    }
    
    printf("A media eh: %.2f", media(&mediaIdade, n));
    
    free(alunos);
    
    return 0;
}

float media(float *mediaIdade, int n)
{
    return (*mediaIdade/n);
}