#include <stdio.h>

int main() {
    int numero, i, ehPrimo = 1;

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = 0; // Números menores ou iguais a 1 não são primos
    } else {
        // Verifica se o número é primo
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = 0; // Não é primo
                break;
            }
        }
    }

    // Exibe o resultado
    if (ehPrimo) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}