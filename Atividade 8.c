#include <stdio.h>

int main()
{
    float salario = 0.0, salarioSoma = 0.0, mediaSalario = 0.0, salarioMaior = 0.0;
    int filho = 0, retorno = 0, filhoSoma = 0, filhoMedia = 0, contadorPessoa = 0, salarioPercentual = 0, salarioCalculo = 0;

    do
    {
        contadorPessoa++;

        do
        {
            printf("Digite a quantidade de filhos: ");
            scanf("%d", &filho);
            filhoMedia++;
            if (filho >= 0)
            {
                filhoSoma += filho;
                break;
            }
            else
            {
                printf("\nValor invalido.");
                printf("\nDeseja adicionar o numero de filhos novamente? 1 para sim, 0 para nao: ");
                scanf("%d", &retorno);
                if (retorno < 1)
                {
                    return 0;
                }
            }
        } while (retorno > 0);

        printf("Digite o seu salario: ");
        scanf("%f", &salario);
        fflush(stdin);
        if (salario >= 0)
        {
            salarioSoma += salario;
            if (salario > salarioMaior)
            {
                salarioMaior = salario;
            }
        }
        else if (salario <= 100)
        {
            salarioPercentual++;
        }
    } while (salario >= 0);

    // média do salário da população
    mediaSalario = salarioSoma / contadorPessoa;
    printf("\nA media salarial das pessoas e: %0.2f", mediaSalario);

    // média do número de filhos;
    float filhoCalculo = (float)filhoSoma / filhoMedia;
    printf("\nA media de filhos e: %0.2f", filhoCalculo);

    // maior salário;
    printf("\nO maior salario e: %0.2f\n", salarioMaior);

    // percentual de pessoas com salário até R$100,00.
    salarioCalculo = salarioPercentual * 100 / contadorPessoa;
    printf("O percentual de pessoas com salário até R$100,00: e %d", salarioCalculo);

    return 0;
}
