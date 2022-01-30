#include<stdio.h>
#include<stdlib.h>

int main(){
    int aux,i, notas[]={100,50,20,10,5,2}, notas2[6];
    double valor, valor2, aux2, moedas[]={1.00, 0.50, 0.25, 0.10, 0.05, 0.01}, moedas2[6];

    scanf("%lf",&valor);

    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
       aux = valor/notas[i];
       valor -= aux*notas[i];
       notas2[i] = aux;
       printf("%d nota(s) de R$ %d"".00\n",notas2[i],notas[i]);
    }
    valor2 = valor;
    printf("MOEDAS:\n");
    for(i=0;i<6;i++)
    {
       aux = valor2/moedas[i];
       valor2 -= aux*moedas[i];
       moedas2[i] = aux;
       printf("%.0f moeda(s) de R$ %.2f\n",moedas2[i],moedas[i]);
    }
    return 0;
}
