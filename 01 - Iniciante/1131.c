#include<cstdio>
#include<cstdlib>

int main(void)
{
    int a, b, X, cont[]={0,0,0,0};

inicio:
    scanf("%d %d",&a,&b);
    cont[0]++;
    if(a>b)
        cont[1]++;
    else if(b>a)
        cont[2]++;
    else
        cont[3]++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&X);
    if(X==1)
        goto inicio;
    else
    {
        printf("%d grenais\n",cont[0]);
        printf("Inter:%d\n",cont[1]);
        printf("Gremio:%d\n",cont[2]);
        printf("Empates:%d\n",cont[3]);
        if(cont[1]>cont[2])
            printf("Inter venceu mais\n");
        else if(cont[2]>cont[1])
            printf("Gremio venceu mais\n");
        else
            printf("Nao houve vencedor\n");
    }
}
