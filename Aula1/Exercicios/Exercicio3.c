#include <stdio.h>

// Dupla: Enzo Arilla (255704) e Francisca Rosa (167666) 

int main() 
{
    int numeroMagico = 42;
    int i, tentativa;
    
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &tentativa);
        if (tentativa == numeroMagico)
        {
            printf("Acertou!\n");
            return 0;
        }
        else if (tentativa < numeroMagico)
                printf("Você digitou um número menor que o mágico!\n");
             else 
                printf("Você digitou um número maior que o mágico!\n");
                
        int diferenca1 = tentativa - numeroMagico;
        int diferenca2 = numeroMagico - tentativa;
        
        if ((diferenca1 > 0 && diferenca1 <=3) || (diferenca2 > 0 && diferenca2 <=3))
            printf("Você está perto do número mágico!\n");
    }
    
    return 0;
}