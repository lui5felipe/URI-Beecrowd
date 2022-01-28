#include<stdio.h>
#include<stdlib.h>

int main(){
    int aux, valor,i, notas[]={100,50,20,10,5,2,1}, notas2[7];
    
    scanf("%d",&valor);
    printf("%d\n",valor);
    
    for(i=0;i<7;i++)
    {
       aux = valor/notas[i];
       valor -= aux*notas[i];
       notas2[i] = aux;
       printf("%d nota(s) de R$ %d"",00\n",notas2[i],notas[i]);
    }
    return 0;
}
