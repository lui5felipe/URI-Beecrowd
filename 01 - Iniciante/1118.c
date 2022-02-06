#include<cstdio>
#include<cstdlib>

int main(void)
{
    int X;
    float a, b;
inicio:
    scanf("%f",&a);
    while(a>10.0 || a<0.0)
    {
        printf("nota invalida\n");
        scanf("%f",&a);
    }
    scanf("%f",&b);
    while(b>10.0 || b<0.0)
    {
        printf("nota invalida\n");
        scanf("%f",&b);
    }
    printf("media = %.2f\n",(a+b)/2);
calc:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&X);
    if(X==1)
        goto inicio;
    else if(X==2)
        return 0;
    else
        goto calc;

}
