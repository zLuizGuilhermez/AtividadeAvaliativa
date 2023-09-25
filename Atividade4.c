#include <stdio.h>
#include<math.h>
int main()
{
    int a = 0, b = 0, c = 0, calculo = 0, retorno = 0;
    float anguloA = 0, anguloB = 0, anguloC = 0;
    do
    {

        printf("Digite o valor de a:");
        scanf("%d", &a);
        printf("Digite o valor de b:");
        scanf("%d", &b);
        printf("Digite o valor de c:");
        scanf("%d", &c);

        if (a + b > c && b + c > a && a + c > b)
        {
            anguloA = acos((b * b + c * c - a * a) / (2 * b * c));
            anguloB = acos((a * a + c * c - b * b) / (2 * a * c));
            anguloC = acos((a * a + b * b - c * c) / (2 * a * b));

            anguloA = anguloA * (180.0 / M_PI);
            anguloB = anguloB * (180.0 / M_PI);
            anguloC = anguloC * (180.0 / M_PI);

            if (anguloA == 90 || anguloB == 90 || anguloC == 90)
            {
                printf("e um triangulo retangulo.");
            }
            else if (anguloA > 90 || anguloB > 90 || anguloC > 90)
            {
                printf("e um triangulo obtusangulo.");
            }
            else
            {
                printf("e um triangulo acutangulo.");
            }
        }
        else
        {
            printf("Não é um triângulo válido.");
        }
        printf("\nDeseja adicionar novos valores?");
        scanf("%d", &retorno);
    } while (retorno > 0);

        return 0;
}
