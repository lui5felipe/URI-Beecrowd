#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, soma=0, i, aux;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }

    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
            soma+=i;
    }
    printf("%d\n",soma);
}
