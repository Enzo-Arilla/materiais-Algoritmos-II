//Exercício para determinar o fatorial de um número
//Exemplo antes da recursão
#include <stdio.h>

int main()
{
    int n, i;
    int fatorial = 0;
    
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    fatorial = n;

    for (i = n-1; i > 0; i--)
        fatorial *= i;
    
    printf("O fatorial de %d eh %d", n, fatorial);

    return 0;
}