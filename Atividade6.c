#include<stdio.h>


int main(){
    int x = 0,y = 0;

    printf("Digite o valor de x");
    scanf("%d", &x);
    printf("Digite o valor de y");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("Q1");
    }
    else if (x < 0 && y > 0)
    {
        printf("Q2");
    }
    else if (x < 0 && y < 0)
    {
        printf("Q3");
    }
    else if (x > 0 && y < 0)
    {
        printf("Q4");
    }else if (x == 0 && y != 0)
    {
        printf("Eixo y");
    }
    else if (x != 0 && y == 0)
    {
        printf("Eixo x");
    }
    else{
        printf("Origem");
    }

    
    
    
    
    
    
}
