#include <stdio.h>

//Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)
//Obs: As cidades digitadas não terão espaços

void retornaMenorMaiorGastos(float gastos[], char cidades[][70], int indice);

int main() {
    
    int N = 0, i;
    float totalGastos = 0.0;
    
    printf("Quantas cidades voce ja visitou?\n");
    scanf("%d", &N);
    
    char cidades[N][70];
    float gastos[N];
    
    printf("Digite o nome da(s) cidade(s) e seus valores:\n");
    for (i = 0; i < N; i++)
    {
        printf("Cidade %d:\n", i+1);
        scanf("%s", cidades[i]);
        scanf("%f", &gastos[i]);
        totalGastos += gastos[i];
    }
    
    retornaMenorMaiorGastos(gastos, cidades, N);
    
    printf("\nO total gasto foi: R$ %.2f", totalGastos);
    
    return 0;
}

void retornaMenorMaiorGastos(float gastos[], char cidades[][70], int indice)
{
    int i, indiceMenor = 0, indiceMaior = 0;
    float maior = gastos[indiceMenor];
    float menor = gastos[indiceMaior];
    
    for (i = 0; i < indice; i++)
    {
        if (gastos[i] > maior)
        {
            maior = gastos[i];
            indiceMaior = i;
        }
        if (gastos[i] < menor)
        {
            menor = gastos[i];
            indiceMenor = i;
        }
    }
    
    printf("A cidade mais cara é %s ", cidades[indiceMaior]);
    printf("\nA cidade mais barata é %s ", cidades[indiceMenor]);
}