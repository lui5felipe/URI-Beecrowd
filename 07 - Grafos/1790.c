#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int c,p,i,j,x,y,cont=0;

    scanf("%d %d",&c,&p);

    int pontes[c][c];
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            pontes[i][j]=0;
        }
    }
    for(i=0;i<p;i++)
    {
            scanf("%d %d",&x,&y);
            pontes[y-1][x-1]=1;
    }
    for(i=1;i<c;i++)
    {
        for(j=0;j<i;j++)
        {
            if(pontes[i][j]==0)
                cont++;
        }
    }
    printf("%d\n",cont);
    return 0;
}
