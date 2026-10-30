#include <stdio.h>

int main() {

    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    switch (operacao) {

        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if (num2 == 0) {
                printf("A divisao por zero nao pode ser realizada.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;

        default:
            printf("Operacao inexistente.\n");
    }

    return 0;
}
