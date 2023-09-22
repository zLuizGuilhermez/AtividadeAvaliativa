#include <stdio.h>

int main()
{

    int voto = 0, nulo = 0, retorno = 0, branco = 0, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;

    do
    {
        printf("Digite o seu voto:");
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 6)
        {
            switch (voto)
            {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                break;
            }
        }
        else if (voto == 0)
        {
            break;
        }
        else
        {
            printf("Valor invalido");
        }

        printf("Deseja adicionar mais 1 voto? 1para sim  0para nao");
        scanf("%d", &retorno);

    } while (retorno > 0);

    // total de votos para cada candidato;
    printf("\nA quantidade de votos para o candidato 1 e: %d", candidato1);
    printf("\nA quantidade de votos para o candidato 2 e: %d", candidato2);
    printf("\nA quantidade de votos para o candidato 3 e: %d", candidato3);
    printf("\nA quantidade de votos para o candidato 4 e: %d", candidato4);

    // total de votos nulos;
    printf("\nA quantidade de votos nulos e: %d", nulo);

    // total de votos em branco;
    printf("\nA quantidade de votos brancos e: %d", branco);

    return 0;
}
