#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    // Solicita ao usuário um número inteiro não negativo
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    // Verifica se o número é válido
    if (numero < 0) {
        printf("Número inválido! Por favor, insira um número não negativo.\n");
        return 1;
    }

    // Calcula o fatorial usando um loop while
    int i = numero;
    while (i > 0) {
        fatorial *= i;
        i--;
    }

    // Exibe o resultado
    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;
}