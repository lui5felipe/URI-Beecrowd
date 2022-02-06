#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int L,i,cont;
    int v;
    while(scanf("%d",&L)!=EOF)
    {
        cont=0;
        for(i=0;i<L;i++)
        {
            scanf("%d",&v);
            if(v>cont)
                cont=v;
        }
        if(cont<10)
            printf("1\n");
        else if(cont>=10 && cont<20)
            printf("2\n");
        else
            printf("3\n");
    }
    return 0;
}
