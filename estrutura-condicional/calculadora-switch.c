#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char operador;

    // Solicita ao usuário que insira o primeiro número
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    // Solicita ao usuário que insira o operador (+, -, * ou /)
    printf("Digite o operador (+, -, * ou /): ");
    scanf(" %c", &operador);

    // Solicita ao usuário que insira o segundo número
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // Realiza a operação de acordo com o operador informado
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %d\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %d\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao permitida!\n");
            }
            break;
        default:
            printf("Erro: Operador invalido!\n");
            break;
    }

    return 0;
}
