#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

     printf("\n");

     printf("\033[32m");

    // Imprime o banner
    printf("$$\\                                     $$\\                 $$$$$$$\\                      $$\\       \n");
    printf("$$ |                                    $  |                $$  __$$\\                     $$ |      \n");
    printf("$$ |      $$\\   $$\\  $$$$$$\\  $$$$$$$\\  \\_/  $$$$$$$\\       $$ |  $$ | $$$$$$\\  $$$$$$$\\  $$ |  $$\\ \n");
    printf("$$ |      $$ |  $$ | \\____$$\\ $$  __$$\\     $$  _____|      $$$$$$$\\ | \\____$$\\ $$  __$$\\ $$ | $$  | \n");
    printf("$$ |      $$ |  $$ | $$$$$$$ |$$ |  $$ |    \\$$$$$$\\        $$  __$$\\  $$$$$$$ |$$ |  $$ |$$$$$$  / \n");
    printf("$$ |      $$ |  $$ |$$  __$$ |$$ |  $$ |     \\____$$\\       $$ |  $$ |$$  __$$ |$$ |  $$ |$$  _$$<  \n");
    printf("$$$$$$$$\\ \\$$$$$$  |\\$$$$$$$ |$$ |  $$ |    $$$$$$$  |      $$$$$$$  |\\$$$$$$$ |$$ |  $$ |$$ | \\$$\\ \n");
    printf("\\________| \\______/  \\_______|\\__|  \\__|    \\_______/       \\_______/  \\_______|\\__|  \\__|\\__|  \\__|\n");

    printf("\033[1;33m");

    printf("\n");

    float emprestimo;
    float taxa_de_juros;
    char car_especiais[10]; //caracteres especiais
    float taxa_mensal;
    float juros;
    float pagamento;
    int opcao;

    printf("Insira o valor do emprestimo: ");
    scanf("%f", &emprestimo);
    getchar();

    printf("Insira a taxa de juros: ");
    fgets(car_especiais, sizeof(car_especiais), stdin);
    car_especiais[strcspn(car_especiais, "\n")] = '\0';

    for (int i = 0;  car_especiais[i] != '\0'; i++){
         if (car_especiais[i] == '%') {
             car_especiais[i] = '\0';
             break;
            }
         }

    taxa_de_juros = strtof(car_especiais, NULL);

    printf("Insira o pagamento mensal: ");
    scanf("%f", &pagamento);

    printf("--------------------\n");
    printf("|1. Juros Simples  |\n");
    printf("|2. Juros Compostos|\n");
    printf("--------------------\n");
    scanf("%d", &opcao);

    printf("\n");

    taxa_mensal = (taxa_de_juros/100)/12;

    for (int m = 1; m <= 12; m++) {
        if (opcao == 1) {
            juros = (taxa_mensal * emprestimo);
            emprestimo -= (juros + pagamento);
        } else if (opcao == 2) {
            juros = (taxa_mensal * emprestimo);
            emprestimo += juros;
            emprestimo -= pagamento; // Atualiza o saldo com os juros
        } else {
            printf("Opção inválida!\n");
            break;
        }

        printf("Mes %d: \n", m);
        printf("Seu juro mensal: R$ %.2f\n", juros);
        printf("Saldo restante: R$ %.2f\n", emprestimo);

        if (emprestimo < 0) {
            emprestimo = 0; // Não pode haver saldo negativo
            printf("Emprestimo quitado.\n");
            break; // Sai do loop se o empréstimo foi quitado
        }

        printf("\n");
    }

    printf("\n");
    system("pause");

    return 0;
}


