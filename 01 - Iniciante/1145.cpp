#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, i, aux;
    scanf("%d %d",&a, &b);

    for(i=1;i<=b;i++)
    {
        if(i%a==0)
            printf("%d\n",i);
        else
            printf("%d ",i);
    }
    return 0;
}
