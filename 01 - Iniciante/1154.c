#include<cstdio>
#include<cstdlib>

int main(void)
{
    int n, aux=0, cont=0;
    double f;
    while(scanf("%d",&n) && n>0)
    {
        aux+=n;
        cont++;
    }
    f = ((double)aux/cont);
    printf("%.2f\n",f);
}
