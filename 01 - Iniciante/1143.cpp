#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, i, aux;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}
