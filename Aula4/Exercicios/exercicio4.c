//Exercício para calcular Tribonacci
//Dupla: Enzo Arilla (255704) e Francisca Rosa (167666)

#include <stdio.h>

int tribonacci(int n) {
    if (n == 1)
        return 1;
    if (n == 2) 
        return 1;
    if (n == 3)
        return 2;
    
    return tribonacci(n -1) + tribonacci(n - 2) + tribonacci (n -3);
}

int main() {
    int num;

    scanf("%d", &num);

    printf("O %do de sequencia tribonacci é %d\n", num, tribonacci(num));

    return 0; 
}