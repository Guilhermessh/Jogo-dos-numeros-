#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int menu;

    srand(time(NULL));

    int condicao;
    printf("valor condicao= %d", condicao);

    do {

        printf("-JOGO DOS NUMEROS-\n");
        printf("1 - Jogar\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &menu);

        if(menu == 1) {

            int dificuldade;
            int max;
            int numeroSecreto;
            int tentativa;
            int acertou = 0;
            int tentativas = 0;
            int limiteTentativas;

            printf("\n-DIFICULDADE-\n");
            printf("1 - Normal (0 a 10)\n");
            printf("2 - Dificil (0 a 20)\n");
            printf("3 - Muito Dificil (0 a 30)\n");
            printf("Escolha: ");

            scanf("%d", &dificuldade);

            if(dificuldade == 1) {

                max = 10;

            } else if(dificuldade == 2) {

                max = 20;

            } else if(dificuldade == 3) {

                max = 30;

            } else {

                printf("\nDificuldade invalida!\n\n");
                continue;
            }

            numeroSecreto = rand() % (max + 1);

            limiteTentativas = max / 2;

            printf("\nVoce tera %d tentativas.\n", limiteTentativas);

            do {

                printf("\nTentativa %d: ", tentativas + 1);

                scanf("%d", &tentativa);

                if(tentativa == numeroSecreto) {

                    printf("\nVOCE ACERTOU!\n");
                    printf("Numero secreto: %d\n", numeroSecreto);

                    acertou = 1;

                } else if(tentativa < numeroSecreto) {

                    printf("O numero digitado eh MENOR que o numero secreto.\n");

                } else {

                    printf("O numero digitado eh MAIOR que o numero secreto.\n");
                }

                tentativas++;

            } while(acertou == 0 && tentativas < limiteTentativas);

            if(acertou == 0) {

                printf("\nVOCE PERDEU!\n");
                printf("O numero secreto era: %d\n", numeroSecreto);
            }

            printf("\n");

        } else if(menu == 2) {

            printf("\nEncerrando o jogo...\n");

        } else {

            printf("\nOpcao invalida!\n\n");
        }

    } while(menu != 2);

    return 0;
}