#include <stdio.h>

int main() {
    float temperatura, convertida;
    int escolha;

    printf("Conversor de Temperaturas\n");
    printf("Escolha a conversão desejada:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Digite sua escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        convertida = (temperatura * 9 / 5) + 32;
        printf("A temperatura em Fahrenheit é: %.2f\n", convertida);
    } else if (escolha == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        convertida = (temperatura - 32) * 5 / 9;
        printf("A temperatura em Celsius é: %.2f\n", convertida);
    } else {
        printf("Opção inválida. Por favor, execute o programa novamente.\n");
    }

    return 0;
}