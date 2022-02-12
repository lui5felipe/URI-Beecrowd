#include<stdio.h>
#include<stdlib.h>

int mat[49][49];
int vet[49];

int bp(int inicio, int V)
{
    int i, cont=0;
    vet[inicio]=1;
    for(i=0;i<V;i++)
    {
        if (mat[inicio][i]==1&&vet[i]==0)
        {
            cont +=(bp(i,V)+1);
        }
    }
    return cont;
}

int main()
{
    int T, N, V, A, i, j, a, b, tot=0;


    scanf("%d",&T);
    while(T>0)
    {
        scanf("%d",&N);
        scanf("%d %d",&V,&A);

        for(i=0;i<V;i++)
    {
        vet[i]=0;
        for(j=0;j<V;j++)
            mat[i][j]=0;
    }

       // vet[N]=1;
        for(i=0;i<A;i++)
                {
                    scanf("%d %d",&a,&b);
                    mat[a][b]=1;
                    mat[b][a]=1;
                }

        tot=bp(N,V);
        printf("%d\n",tot*2);
        T--;
    }
    return 0;
}
