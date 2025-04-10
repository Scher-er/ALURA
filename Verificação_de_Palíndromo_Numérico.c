#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverter o número
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Verificar se é palíndromo
    if (originalNum == reversedNum) {
        printf("O número %d é um palíndromo.\n", originalNum);
    } else {
        printf("O número %d não é um palíndromo.\n", originalNum);
    }

    return 0;
}