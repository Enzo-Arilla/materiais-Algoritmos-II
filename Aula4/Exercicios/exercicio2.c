//Exercício para somar recursivamente de todos os números de 1 a n
//Dupla: Enzo Arilla (255704) e Francisca Rosa (167666)

#include <stdio.h>

int somaNumeros(int n);

int main()
{
    int n, resultado;

    printf("Digite o numero para a soma: ");
    scanf("%d", &n);

    resultado = somaNumeros(n);

    printf("O resultado da soma eh: %d", resultado);  

    return 0;
}

int somaNumeros(int n)
{
    if (n == 1)
      return 1;

    return n + somaNumeros(n-1);
}