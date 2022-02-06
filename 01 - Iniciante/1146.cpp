#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, i, aux;

    while(scanf("%d",&a) && a!=0)
    {
        for(i=1;i<=a;i++)
        {
            if(i==a)
                printf("%d\n",i);
            else
                printf("%d ",i);
        }
    }
    return 0;
}
