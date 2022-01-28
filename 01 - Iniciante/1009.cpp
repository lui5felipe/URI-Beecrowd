#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nome[50];
    double salariofixo, totaldevendas, total;
    scanf("%[^\n]",&nome);    
    scanf("%lf",&salariofixo);
    scanf("%lf",&totaldevendas);
    
    total = salariofixo + (totaldevendas*0.15);
    
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}
