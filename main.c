#include <stdio.h>

// Componentes do grupo: Igor Baiocco Rodrigues e Yuri Lopes Gomes de Paulo

int main() {
    float vetor[10], backup[10];

    while(1 > 0) {
        int opcao, i, e, n = 0;
        float maior = -99999, menor = 999999, total = 0, media, ki, kj, a;
        printf("\n\n************************************************************************************************ \n"
               "\n"
               "0  - SAIR DA APLICAÇÃO\n"
               "1  - INICIALIZE O VETOR DE 10 POSIÇÕES\n"
               "2  - EXIBA O VETOR COMPLETO\n"
               "3  - EXIBA O VETOR AO INVERSO\n"
               "4  - EXIBA NA TELA O ELEMENTO DE UMA POSIÇÃO DO VETOR\n"
               "5  - SUBSTITUA UM ELEMENTO DE UMA POSIÇÃO DO VETOR\n"
               "6  - EXIBA NA TELA O MAIOR NÚMERO DO VETOR E SUA POSIÇÃO\n"
               "7  - EXIBA NA TELA O MENOR NÚMERO DO VETOR E SUA POSIÇÃO\n"
               "8  - EXIBA  A MÉDIA DOS NÚMEROS INFORMADOS NO VETOR\n"
               "9  - EXIBA A QUANTIDADE DE NÚMEROS DE UM INTERVALO ki e kj\n"
               "10 - PERMUTA DUAS POSIÇÕES DO VETOR\n"
               "11 - CRIA UMA COPIA DO VETOR\n"
               "12 - RESTAURA A COPIA DO VETOR\n"
               "13 - SOBRE\n"
               "\n"
               "\n"
               "DIGITE A OPÇÃO DESEJADA :\n"
               "\n"
               "***********************************************************************************************\n\n\n");

        scanf("%d", &opcao);
        switch (opcao) {
            case 0:
                return 0;
            case 1:
                printf("Vamos criar uma lista de 10 números\n\n");
                for (i = 0; i < 10; i++) {
                    printf("Insira o %do valor para o vetor: ", (i + 1));
                    scanf("%f", &vetor[i]);
                    printf("\n");
                }
                break;
            case 2:
                printf("Seu vetor atual é:\n");
                printf("[");
                for (i = 0; i < 10; i++) {
                    if (i < 9) {
                        printf("%.2f, ", vetor[i]);
                    } else {
                        printf("%.2f]", vetor[i]);
                    }
                }
                break;
            case 3:
                printf("Seu vetor atual na ordem inversa é:\n");
                printf("[");
                i = 9;
                for (i = 9; i >= 0; i--) {
                    if (i > 0) {
                        printf("%.2f, ", vetor[i]);
                    } else {
                        printf("%.2f]", vetor[i]);
                    }
                }
                break;
            case 4:
                printf("Insira a posição que deseja checar o vetor (OBS.: Insira os valores de 0 a 9): ");
                scanf("%d", &i);
                printf("%.2f", vetor[i]);
                break;
            case 5:
                printf("Insira a posição do valor que deseja substituir (insira valores de 0 a 9): ");
                scanf("%d", &i);
                printf("Insira o valor para substituir: ");
                scanf("%f", &vetor[i]);
                break;
            case 6:
                printf("Iniciando varredura de valores . . .\n");
                for (i = 0; i < 10; i++) {
                    if (vetor[i] > maior) {
                        maior = vetor[i];
                        e = i;
                    }
                }
                printf("Maior valor encontrado: %.2f\n"
                       "Sua posição: %d", maior, e);
                break;
            case 7:
                printf("Iniciando varredura de valores . . .\n");
                for (i = 0; i < 10; i++) {
                    if (vetor[i] < menor) {
                        menor = vetor[i];
                        e = i;
                    }
                }
                printf("Menor valor encontrado: %.2f\n"
                       "Sua posição: %d", menor, e);
                break;
            case 8:
                total = 0;
                for (i = 0; i < 10; i++) {
                    total += vetor[i];
                }
                media = total / 10;
                printf("Média dos valores: %.2f", media);
                break;
            case 9:
                printf("Insira o valor do início do intervalo: ");
                scanf("%f", &ki);
                printf("Insira o valor do fim do intervalo: ");
                scanf("%f", &kj);

                printf("Valores dentro do intervalo especificado: \n");
                total = 0;
                for (i = 0; i < 10; i++) {
                    if (ki <= vetor[i] && vetor[i] <= kj) {
                        printf("%.2f \n", vetor[i]);
                        total++;
                    }
                }
                printf("\nTotal: %.0f;", total);
                break;
            case 10:
                printf("Insira as posições para permuta abaixo: \n");
                scanf("%d", &i);
                scanf("%d", &e);
                a = vetor[i];
                vetor[i] = vetor[e];
                vetor[e] = a;
                break;
            case 11:
                for (i = 0; i < 10; i++) {
                    backup[i] = vetor[i];
                }
                printf("Valores salvos com sucesso até o fim da execução.\n");
                break;
            case 12:
                for (i = 0; i < 10; i++) {
                    vetor[i] = backup[i];
                }
                break;
            case 13:
                printf(
                        "Autores: \n"
                        "   Igor Baiocco Rodrigues\n"
                        "   Yuri Lopes Gomes de Paulo\n"
                        "\n"
                        "Data de publicação: "
                        "   30/ago/2021"
                        );
        }
    }
}
