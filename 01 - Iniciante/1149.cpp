#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, i, aux=0;

    scanf("%d %d",&a, &b);
    while(b<=0)
        scanf("%d",&b);

    for(i=0;i<b;i++)
    {
        aux+=a;
        a++;
    }
    printf("%d\n",aux);
    return 0;
}
