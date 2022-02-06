#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, b, i, aux;
    scanf("%d",&a);

    for(i=1;i<=(a*4);i++)
    {
        if(i%4==0)
            printf("PUM\n");
        else
            printf("%d ",i);
    }
    return 0;
}
