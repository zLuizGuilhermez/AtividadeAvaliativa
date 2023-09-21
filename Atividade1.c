#include<stdio.h>
#include<math.h>


int main(){

   int numeroX = 0;
   float resultadoConta = 0.0;

   printf("Digite o valor de x");
   scanf("%d", &numeroX);

   
    resultadoConta = ((5*numeroX + 3)/sqrt(pow(numeroX, 2) - 16));
    printf("O resultado de f(x) é igual a : %0.2f", resultadoConta);
    
}
