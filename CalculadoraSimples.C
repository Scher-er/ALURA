#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    // Solicita ao usuário os dois números e a operação
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Escolha a operação (+, -, *, /): ");
    scanf(" %c", &operation);

    // Realiza a operação com base na escolha do usuário
    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("Resultado: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Resultado: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Resultado: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Resultado: %.2f\n", result);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida.\n");
            break;
    }

    return 0;
}