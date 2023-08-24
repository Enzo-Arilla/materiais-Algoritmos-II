#include <stdio.h>
#include <stdlib.h>

float media(float *mediaIdade, int n);

int main() {
    
    int n = 0;
    float mediaIdade = 0.0;
    int i;
    
    scanf("%d", &n);
    
    int *alunos = malloc(n * sizeof(int));
    
    if (alunos == NULL)
        return 1;
    
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