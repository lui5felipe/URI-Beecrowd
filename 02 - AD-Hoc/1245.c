#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int botas[31][2], N, M, cont=0, i, j=0;
    char L;

    while(scanf("%d",&N)!= EOF)
    {
        memset(botas,0,sizeof(botas));
        for(i=0;i<N;i++)
        {
            scanf("%d %c",&M,&L);
            botas[M-30][L-68]++;
        }
        for(i=0;i<=30;i++)
        {
            if(botas[i][j]!=0 && botas[i][j+1]!=0)
            {

                if(botas[i][j]>=botas[i][j+1])
                    cont+=botas[i][j+1];
                else
                    cont+=botas[i][j];
            }
        }
        printf("%d\n",cont);
        cont=0;
    }

    return 0;
}
