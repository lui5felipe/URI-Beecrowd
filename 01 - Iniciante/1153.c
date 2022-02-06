#include<cstdio>
#include<cstdlib>

int main(void)
{
    int vet[]={0,1}, n, i, aux=1;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       aux = aux*i;
    }
    printf("%d\n",aux);
}
