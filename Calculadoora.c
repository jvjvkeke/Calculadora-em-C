#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    float n1, n2;
    char operador;
    bool ligado = true;
    int opcao;

    while (ligado)
    {
        system("cls");

        printf("===== CALCULADORA =====\n");

        printf("DIGITE UM NUMERO: ");
        scanf("%f", &n1);

        printf("DIGITE UM OPERADOR (+ - * /): ");
        scanf(" %c", &operador);

        printf("DIGITE OUTRO NUMERO: ");
        scanf("%f", &n2);

       

        printf("\nRESULTADO:\n");

        switch (operador)
        {
        case '+':
            printf("SOMA = %.2f\n", n1 + n2);
            break;

        case '-':
            printf("SUBTRACAO = %.2f\n", n1 - n2);
            break;

        case '*':
            printf("MULTIPLICACAO = %.2f\n", n1 * n2);
            break;

        case '/':
            if (n2 == 0)
            {
                printf("ERRO: NAO EXISTE DIVISAO POR ZERO\n");
            }
            else
            {
                printf("DIVISAO = %.2f\n", n1 / n2);
            }
            break;

        default:
            printf("OPERADOR INVALIDO\n");
        }

        printf("\nDeseja continuar? (1 = sim / 0 = nao): ");
        scanf("%d", &opcao);

        if (opcao == 0)
        {
            ligado = false;
        }
    }

    return 0;
}
