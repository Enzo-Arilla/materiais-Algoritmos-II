#include <stdio.h>

// Dupla: Enzo Arilla (255704) e Francisca Rosa (167666) 

int main() 
{
    int dia, mes, ano;
    
    scanf("%d-%d-%d", &dia, &mes, &ano);
    
    switch (mes)
    {
        case 1:
            if (dia >= 21)
                printf("Aquario\n");
            else
                printf("Capricornio\n");
        break;
        
        case 2:
            if (dia >= 21)
                printf("Peixes\n");
            else
                printf("Aquario\n");
        break;
        
        case 3:
            if (dia >= 21)
                printf("Aries\n");
            else
                printf("Peixes\n");
        break;
        
        case 4:
            if (dia >= 21)
                printf("Touro\n");
            else
                printf("Aries\n");
        break;
        
        case 5:
            if (dia >= 21)
                printf("Gemeos\n");
            else
                printf("Touro\n");
        break;
        
        case 6:
            if (dia >= 21)
                printf("Cancer\n");
            else
                printf("Gemeos\n");
        break;
        
        case 7:
            if (dia >= 21)
                printf("Leao\n");
            else
                printf("Cancer\n");
        break;
        
        case 8:
            if (dia >= 21)
                printf("Virgem\n");
            else
                printf("Leao\n");
        break;
        
        case 9:
            if (dia >= 21)
                printf("Libra\n");
            else
                printf("Virgem \n");
        
        break;
        
        case 10:
            if (dia >= 21)
                printf("Escorpiao\n");
            else
                printf("Libra\n");
        
        break;
        
        case 11:
            if (dia >= 21)
                printf("Sagitario\n");
            else
                printf("Escorpiao\n");
        
        break;
        
        case 12:
            if (dia >= 21)
                printf("Capricornio\n");
            else
                printf("Sagitario\n");
        
        break;
    }
    
    return 0;
}