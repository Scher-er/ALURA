#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void calcularAreaQuadrado() {
    float lado, area;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;
    printf("A área do quadrado é: %.2f\n", area);
}

void calcularAreaCirculo() {
    float raio, area;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    area = M_PI * raio * raio;
    printf("A área do círculo é: %.2f\n", area);
}

void calcularAreaTriangulo() {
    float base, altura, area;
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);
    area = (base * altura) / 2;
    printf("A área do triângulo é: %.2f\n", area);
}

int main() {
    int opcao;

    do {
        printf("\nMenu de Opções:\n");
        printf("1. Calcular a área de um quadrado\n");
        printf("2. Calcular a área de um círculo\n");
        printf("3. Calcular a área de um triângulo\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                calcularAreaQuadrado();
                break;
            case 2:
                calcularAreaCirculo();
                break;
            case 3:
                calcularAreaTriangulo();
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}