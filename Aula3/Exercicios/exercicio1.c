#include <stdio.h>

//Dupla: Enzo Arilla (255705) e Francisca Rosa (167666)

int verifica_primo(int numero);

int main() {
    
    int numero = 0, retorno = 0;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    retorno = verifica_primo(numero);
    
    if (retorno)
        printf("Eh um numero primo\n");
    else
        printf("Nao eh um numero primo\n");

    return 0;
}

int verifica_primo(int numero)
{
    int i;
    
    if (numero < 2)
        return 0;
    else
    {
        for (i = 2; i <= (numero/2); i++)
            if (numero % i == 0)
                return 0;
    }
    
    return 1;
}