#include <stdio.h>

// Dupla: Enzo Arilla (255704) e Francisca Rosa (167666) 

int main() 
{
    float fornecedores[3];
    int i; 
    float menor = 0.0, maior = 0.0;
    
    for (i = 0; i < 3; i++)
        scanf("%f", &fornecedores[i]);
    
    maior = fornecedores[0];
    menor = fornecedores[0];
        
    for (i = 0; i < 3; i++)
    {
        if (maior < fornecedores[i])
            maior = fornecedores[i];
        if (menor > fornecedores[i])
            menor = fornecedores[i];
    }
        
    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    
    return 0;
}