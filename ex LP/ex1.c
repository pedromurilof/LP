#include <stdio.h>

int main() {
    // Declaração das variáveis
    int n1, n2, n3, n4, soma;

    // Leitura dos quatro números inteiros
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    printf("Digite o quarto número: ");
    scanf("%d", &n4);

    // Cálculo da soma
    soma = n1 + n2 + n3 + n4;

    // Exibição do resultado
    printf("A soma dos números é: %d\n", soma);

    return 0;
}