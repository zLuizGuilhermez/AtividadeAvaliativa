#include <stdio.h>

int main()
{

    float nota1 = 0.0,nota2 =0.0,nota3 =0.0,formula_final = 0.0,media_geral = 0.0,conta_final = 0.0;
    int numero_de_alunos = 0 ,retorno = 0;
    do{
        printf("\nCentral de notas!!");
        printf("\nNumero de alunos ja cadastrados com suas respectivas notas:%d", numero_de_alunos);
        printf("\nDigite a sua primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota:");
        scanf("%f", &nota2);
        printf("Digite a terceira nota:");
        scanf("%f", &nota3);
      
        formula_final = ((nota1 * 2 + nota2 * 4 + nota3 * 4) / 10);
        if (formula_final >= 7 ){
            printf("Aprovado. com uma media de : %0.2f", formula_final);
        }
        else{
            printf("Reprovado. com uma media de : %0.02f", formula_final);
        }
        media_geral += formula_final;
        numero_de_alunos++;
        
        printf("\nDeseja adicionar mais 1 aluno. (1 sim/ 0 nao)");
        scanf("%d", &retorno);

    } while (retorno > 0);
     
     conta_final = media_geral / numero_de_alunos;
     printf("A media geral da turma e:%0.02f", conta_final);

}
