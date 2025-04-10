#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Funções auxiliares para cada algoritmo
void calculadoraSimples() {
    double num1, num2, resultado;
    char operacao;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+': resultado = num1 + num2; break;
        case '-': resultado = num1 - num2; break;
        case '*': resultado = num1 * num2; break;
        case '/': 
            if (num2 != 0) resultado = num1 / num2;
            else {
                printf("Erro: Divisao por zero!\n");
                return;
            }
            break;
        default: 
            printf("Operacao invalida!\n");
            return;
    }
    printf("Resultado: %.2lf\n", resultado);
}

void verificarPrimo() {
    int num, i, ehPrimo = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 1) ehPrimo = 0;
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            ehPrimo = 0;
            break;
        }
    }
    if (ehPrimo) printf("%d eh primo.\n", num);
    else printf("%d nao eh primo.\n", num);
}

void sequenciaFibonacci() {
    int n, t1 = 0, t2 = 1, proxTermo;
    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        proxTermo = t1 + t2;
        t1 = t2;
        t2 = proxTermo;
    }
    printf("\n");
}

void conversaoTemperatura() {
    double temp, convertido;
    char opcao;
    printf("Escolha a conversao (C para F ou F para C): ");
    scanf(" %c", &opcao);
    printf("Digite a temperatura: ");
    scanf("%lf", &temp);

    if (opcao == 'C' || opcao == 'c') {
        convertido = (temp * 9/5) + 32;
        printf("Temperatura em Fahrenheit: %.2lf\n", convertido);
    } else if (opcao == 'F' || opcao == 'f') {
        convertido = (temp - 32) * 5/9;
        printf("Temperatura em Celsius: %.2lf\n", convertido);
    } else {
        printf("Opcao invalida!\n");
    }
}

void calcularFatorial() {
    int num;
    unsigned long long fatorial = 1;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
        return;
    }

    while (num > 0) {
        fatorial *= num;
        num--;
    }
    printf("Fatorial: %llu\n", fatorial);
}

void jogoAdivinhacao() {
    int numeroSecreto = 42, palpite;
    printf("Tente adivinhar o numero secreto: ");
    do {
        scanf("%d", &palpite);
        if (palpite < numeroSecreto) printf("Muito baixo! Tente novamente: ");
        else if (palpite > numeroSecreto) printf("Muito alto! Tente novamente: ");
    } while (palpite != numeroSecreto);
    printf("Parabens! Voce acertou!\n");
}

void verificarPalindromo() {
    int num, reverso = 0, original, resto;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        resto = num % 10;
        reverso = reverso * 10 + resto;
        num /= 10;
    }

    if (original == reverso) printf("%d eh um palindromo.\n", original);
    else printf("%d nao eh um palindromo.\n", original);
}

void calcularMediaPonderada() {
    double nota1, nota2, nota3, peso1, peso2, peso3, media;
    printf("Digite as 3 notas e seus respectivos pesos:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &nota1, &peso1, &nota2, &peso2, &nota3, &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("Media ponderada: %.2lf\n", media);
}

void menuOpcoesNumericas() {
    int opcao;
    printf("Escolha uma opcao:\n");
    printf("1. Calcular a area de um quadrado\n");
    printf("2. Calcular a area de um circulo\n");
    printf("3. Calcular a area de um triangulo\n");
    printf("4. Sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: {
            double lado;
            printf("Digite o lado do quadrado: ");
            scanf("%lf", &lado);
            printf("Area do quadrado: %.2lf\n", lado * lado);
            break;
        }
        case 2: {
            double raio;
            printf("Digite o raio do circulo: ");
            scanf("%lf", &raio);
            printf("Area do circulo: %.2lf\n", M_PI * raio * raio);
            break;
        }
        case 3: {
            double base, altura;
            printf("Digite a base e a altura do triangulo: ");
            scanf("%lf %lf", &base, &altura);
            printf("Area do triangulo: %.2lf\n", (base * altura) / 2);
            break;
        }
        case 4:
            printf("Saindo...\n");
            return;
        default:
            printf("Opcao invalida!\n");
    }
}

// Programa principal
int main() {
    int escolha;
    do {
        printf("\nEscolha um algoritmo para executar:\n");
        printf("1. Calculadora Simples\n");
        printf("2. Verificacao de Números Primos\n");
        printf("3. Sequencia de Fibonacci\n");
        printf("4. Conversao de Temperatura\n");
        printf("5. Calculo de Fatorial\n");
        printf("6. Jogo de Adivinhacao\n");
        printf("7. Verificacao de Palindromo Numerico\n");
        printf("8. Calculo de Media Ponderada\n");
        printf("9. Menu de Opcoes Numericas\n");
        printf("10. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1: calculadoraSimples(); break;
            case 2: verificarPrimo(); break;
            case 3: sequenciaFibonacci(); break;
            case 4: conversaoTemperatura(); break;
            case 5: calcularFatorial(); break;
            case 6: jogoAdivinhacao(); break;
            case 7: verificarPalindromo(); break;
            case 8: calcularMediaPonderada(); break;
            case 9: menuOpcoesNumericas(); break;
            case 10: printf("Encerrando o programa...\n"); break;
            default: printf("Opcao invalida! Tente novamente.\n");
        }
    } while (escolha != 10);

    return 0;
}