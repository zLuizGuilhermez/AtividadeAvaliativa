#include <stdio.h>

int main() {
    float a, b, c;
    int retorno;

    do {
        printf("Digite o valor de a: ");
        scanf("%f", &a);
        printf("Digite o valor de b: ");
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        scanf("%f", &c);

        if (a > 0 && b > 0 && c > 0) {
            if (a == b && b == c) {
                printf("e um triangulo equilatero\n");
            } else if (a == b || a == c || b == c) {
                printf("e um triangulo isosceles\n");
            } else {
                printf("e um triangulo escaleno\n");
            }
        } else {
            printf("Os valores nao podem ser menores ou iguais a zero.\n");
        }

        printf("\nDeseja inserir os valores novamente? (1 para sim / 0 para nao): ");
        scanf("%d", &retorno);

    } while (retorno > 0);

    return 0;
}
