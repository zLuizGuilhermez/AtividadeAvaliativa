#include<Stdio.h>
#include<math.h>

int main(){

   float x1 = 0,y1 = 0, x2 = 0,y2 = 0,distancia = 0;

   printf("Digite o valor de x1");
   scanf("%f", &x1);
   printf("Digite o valor de x2");
   scanf("%f", &x2);
   printf("Digite o valor de y1");
   scanf("%f", &y1);
   printf("Digite o valor de y2");
   scanf("%f", &y2);

   distancia = sqrt(pow(x2 - x1,2)+pow(y2 - y1,2));

   printf("A ditancia e %0.4f", distancia);

}
