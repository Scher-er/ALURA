#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float mediaPonderada;

    // Solicita as notas e seus respectivos pesos
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    // Calcula a média ponderada
    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    // Exibe a média ponderada
    printf("A média ponderada é: %.2f\n", mediaPonderada);

    return 0;
}