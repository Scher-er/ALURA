#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
 {
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Bem vindo, ao joj!");

 
    int nsecrecto = 42;
 
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while(ganhou == 0){
        printf("Tenativa %d \n", tentativas);
        printf("Digite o seu chute: ");
       
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
        
        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == nsecrecto);
        int maior = chute > nsecrecto;

        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Você é um bom jogador!\n");
            
            ganhou = 1;
        }
        else if(maior){
            printf("Seu chute foi maior que o número secreto!\n");
        }
        else{
            printf("Seu chute foi menor que o número secreto!\n");
        }

        tentativas++;
    }
    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas! \n", tentativas-1);
    return 0;
}