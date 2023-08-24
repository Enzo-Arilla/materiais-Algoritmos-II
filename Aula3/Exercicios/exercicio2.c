#include <stdio.h>

//Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)

void soma_produto(int a, int b, int* soma, int* produto)
{
    *soma = a + b;
    *produto = a * b;
}

int main() {
    
    int s, p;
    int soma, produto;
    soma_produto(2, 5, &s, &p);
    
    printf("Soma: %d Produto: %d", s, p);

    return 0;
}