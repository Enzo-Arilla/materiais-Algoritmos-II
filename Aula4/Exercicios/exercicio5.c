#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int inicio, int fim) {
    // Caso base: se a string tiver 0 ou 1 caracteres, é um palíndromo
    if (inicio >= fim) {
        return 1;
    }
    
    // Verifica se os caracteres nas posições 'inicio' e 'fim' são iguais
    if (str[inicio] != str[fim]) {
        return 0; 
    }
    
    // Chamada recursiva para verificar os caracteres internos
    return isPalindrome(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];
    
    scanf("%s", str);
    
    int len = strlen(str);
    int result = isPalindrome(str, 0, len - 1);
    
    if (result) {
        printf("Eh um palindromo.\n");
    } else {
        printf("Não eh um palindromo.\n");
    }
    
    return 0;
}





