#include <stdio.h>

main()
{

    float a, b, c;
    int retorno;

    do
    {
        printf("Digite o valor de a:");
        scanf("%f", &a);
        printf("Digite o valor de b");
        scanf("%f", &b);
        printf("Digite o valor de c");
        scanf("%f", &c);
        if (a > 0 && b > 0 && c > 0){
            if (a == b && a != c || c == b && c != a || a == c && a != b){
                printf("e um triangulo isosceles");
            }
            else if(a != b || a != c && b != a || b != c && c != a || c != b ){
                printf(" e um triangulo escaleno");
            }
            else{
                printf("e um triangulo equilatero");
            }
        }
        else{
            printf("O valor não pode ser menor que zero.");
        }

        printf("\nDeseja inserir os valores novamente? (1 para sim / 0 para nao)");
        scanf("%d", &retorno);

    } while (retorno > 0);
     return 0; 
 }
