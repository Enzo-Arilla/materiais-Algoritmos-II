//Exercício para imprimir a sequência de Fibonacci
//Dupla: Enzo Arilla (255704) e Francisca Rosa (167666)

#include <stdio.h>

void fibo(int n);

int main()
{

  int n;

  printf("Digite a quantidade de termos da sequencia: ");
  scanf("%d", &n);

  fibo(n);

  return 0;
}

void fibo(int n)
{
    int i, aux = 0, aux2 = 0, termos = 0;
    if (n < 0 || n == 0)
        printf("Valor invalido!");
    else
    {
        for (i = 1; i <= n; i++)
        {
            aux2 = aux;
            aux = termos;
            termos += aux2;
            printf("%d ", termos);
            if (i == 1)
                aux++; //Incrementando para iniciar a sequência 
        }   
    }
}