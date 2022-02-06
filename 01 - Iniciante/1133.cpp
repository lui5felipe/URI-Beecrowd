#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, i, aux;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }

    for(i=a+1;i<b;i++)
    {
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }

}
