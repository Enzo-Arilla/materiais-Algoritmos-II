//Exercício para calcular potência
//Dupla: Enzo Arilla (255704) e Francisca Rosa (167666)

#include <stdio.h>

int potencia(int baseX, int expoY) {
    if (expoY == 0)
        return 1;
    if (expoY == 1)
        return baseX;
    return baseX * potencia(baseX, expoY - 1);
}

int main() {
    int base, expoente;
    scanf("%d %d", &base, &expoente);

    printf("%d\n", potencia(base, expoente));

    return 0;
}
