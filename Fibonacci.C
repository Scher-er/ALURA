#include <stdio.h>

int main() {
    int n;

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    int a = 0, b = 1, next;

    printf("Sequência de Fibonacci com %d termos:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}