#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int T, N, M, i, q=0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&N,&M);
        int vet[N], mo[N];

        for(i=0;i<N;i++)
            {
                scanf("%d",&vet[i]);
                mo[i]=0;
            }

            for(i=N;i>0 && M>0;i--)
            {
                mo[i-1]+=(M/vet[i-1]);
                M -= (vet[i-1]*mo[i-1]);
                q += mo[i-1];
            }
        printf("%d\n",q);
        q=0;
    }
    return 0;
}
