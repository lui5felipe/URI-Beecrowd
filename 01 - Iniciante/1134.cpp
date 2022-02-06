#include<cstdio>
#include<cstdlib>

using namespace std;


int main()
{
    int a, al=0, g=0, d=0;
    while(scanf("%d",&a) && a!=4)
    {
        if(a==1)
            al++;
        else if(a==2)
            g++;
        else if(a==3)
            d++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,g,d);
    return 0;
}
