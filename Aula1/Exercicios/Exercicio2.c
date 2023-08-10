#include <stdio.h>

// Dupla: Enzo Arilla (255704) e Francisca Rosa (167666) 

int main() 
{
    int i;
    int qtdeAnos;
    float vlrInvestido = 0.0, percRetorno;
    
    printf("Digite o tempo de investimento: \n");
    scanf("%d", &qtdeAnos);
    
    printf("Digite a porcentagem de retorno: \n");
    scanf("%f", &percRetorno);
    
    printf("Digite o valor inicial a ser investido: \n");
    scanf("%f", &vlrInvestido);
    
    for (i = 0; i < qtdeAnos; i++)
        vlrInvestido += (vlrInvestido * (percRetorno/100));
        

    printf("O valor final será: R$%.2f", vlrInvestido);
    
    return 0;
}