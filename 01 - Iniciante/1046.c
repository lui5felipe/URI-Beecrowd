#include<stdio.h>

int main(void)
{
    int ini,fim;
    scanf("%d %d",&ini,&fim);

    if(ini==fim)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(fim > ini)
        printf("O JOGO DUROU %d HORA(S)\n",fim-ini);
    else
        printf("O JOGO DUROU %d HORA(S)\n",(24-ini+fim));
    return 0;
}
