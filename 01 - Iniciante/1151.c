#include<cstdio>
#include<cstdlib>

int main(void)
{
    int vet[]={0,1}, n, i, aux;

    scanf("%d",&n);
    for(i=0;i<(n-1);i++)
    {
        if(i==0)
            printf("%d ",vet[i]);
        else if(i==1)
            printf("%d ",vet[i]);
        else
        {
            printf("%d ",vet[0]+vet[1]);
            aux = vet[0];
            vet[0] = vet[1];
            vet[1] = aux + vet[1];
        }
    }
    printf("%d\n",vet[0]+vet[1]);
}
