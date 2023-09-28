//Exercício para determinar o fatorial de um número
//Exemplo depois da recursão
#include <stdio.h>

int fatorial(int n);

int main()
{
    int n, resultado;
    
    scanf("%d", &n);

    resultado = fatorial(n);
    
    printf("%d", resultado);
    
    return 0;
}

int fatorial(int n)
{
    
    if (n == 1)
        return 1;
    
    return n * fatorial(n-1);

}