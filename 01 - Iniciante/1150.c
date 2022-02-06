#include<cstdio>
#include<cstdlib>

int main(void)
{
    int Y, X, Z, cont=1;

    scanf("%d",&X);
inicio:
    scanf("%d",&Z);
    if(Z<=X)
        goto inicio;
    Y=X;
    while(X<Z)
    {
        Y++;
        X = X+Y;
        cont++;
    }
    printf("%d\n",cont);
}
