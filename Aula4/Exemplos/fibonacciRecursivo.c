//Exemplo da sequência de fibonacci de forma recursiva
#include <stdio.h>

int fibo(int n);

int main()
{
    int n, i;
    printf("Digite o numero de termos da sequencia: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        printf("%d", fibo(i));

    return 0;
}

int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n-1) + fibo(n-2);
}