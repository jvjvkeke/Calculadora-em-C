#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    system("cls"); 
    
    float n1,n2;
    char operador;
    bool ligado = true;
    int opcao;

    while (ligado)
    {
        printf("DIGITE UM NUMERO\n");
        scanf("%f",&n1);

        printf("DIGITE OUTRO NUMERO\n");
        scanf("%f",&n2);

        printf("DIGITE UM OPERADOR : (+) (-) (/) (*) \n");
        scanf(" %c",&operador);

        switch (operador)
        {
        case '+':
            printf("SOMA DOS NÚMEROS É : %.2f\n",n1+n2);
            break;
        case '-':
            printf("SUBTRACAO DOS NUMEROS É %.2f\n",n1-n2);
            break;
        case '/':
            printf("DIVISAO DOS NUMEROS É %.2f\n",n1/n2);
            break;
        case '*':
            printf("MULTIPLICACAO DOS NUMEROS É: %.2f\n",n1*n2);
            break;
        default:
            printf("INSIRA UM VALOR VALIDO\n");
        }

        printf("\nDeseja continuar? (1 = sim / 0 = nao): ");
        scanf("%d", &opcao);

        if(opcao == 0){
            ligado = false;
        }

        system("cls"); // limpa a tela a cada loop
    }

    return 0;
}