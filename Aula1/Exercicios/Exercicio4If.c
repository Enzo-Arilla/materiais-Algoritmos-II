#include <stdio.h>

// Dupla: Enzo Arilla (255704) e Francisca Rosa (167666) 

int main() 
{
    int dia, mes, ano;
    
    scanf("%d-%d-%d", &dia, &mes, &ano);
    
    if (dia >= 21 && mes == 1 || dia < 21 && mes == 2)
        printf("Aquario\n");
    if (dia >= 21 && mes == 2 || dia < 21 && mes == 3)
        printf("Peixes\n");
    if (dia >= 21 && mes == 3 || dia < 21 && mes == 4)
        printf("Aries\n");
    if (dia >= 21 && mes == 4 || dia < 21 && mes == 5)
        printf("Touro\n");
    if (dia >= 21 && mes == 5 || dia < 21 && mes == 6)
        printf("Gemeos\n");
    if (dia >= 21 && mes == 6 || dia < 21 && mes == 7)
        printf("Cancer\n");
    if (dia >= 21 && mes == 7 || dia < 21 && mes == 8)
        printf("Leao\n");
    if (dia >= 21 && mes == 8 || dia < 21 && mes == 9)
        printf("Virgem\n");
    if (dia >= 21 && mes == 9 || dia < 21 && mes == 10)
        printf("Libra\n");
    if (dia >= 21 && mes == 10 || dia < 21 && mes == 11)
        printf("Escorpiao\n");
    if (dia >= 21 && mes == 11 || dia < 21 && mes == 12)
        printf("Sagitario\n");
    if (dia >= 21 && mes == 12 || dia < 21 && mes == 1)
        printf("Capricornio\n");
    
    return 0;
}