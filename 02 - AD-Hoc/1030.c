#include<stdio.h>
#include<stdlib.h>

int main()
{
    int casos, pessoas, pulo, res, pulou=0, aux=2, caso=1;
    scanf("%d",&casos);

    while(caso<=casos)
    {
        scanf("%d %d",&pessoas,&pulo);
        pulou = 0;
        aux = 2;
        while(aux<=pessoas)
        {
            pulou = (pulou + pulo) % aux;
            aux++;
        }
        printf("Case %d: %d\n",caso, pulou+1);
        caso++;
    }
}
