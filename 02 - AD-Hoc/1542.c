#include<stdio.h>
#include<stdlib.h>
#include<cmath>
 
int main(void)
{
    int Q, D, P, paginas;
    while(scanf("%d",&Q) && Q>0)
    {
        scanf("%d %d",&D,&P);
        paginas = trunc((double)(Q*D)/-(Q-P)*P);
        if(paginas==1)
            printf("%d pagina\n",paginas);
        else
            printf("%d paginas\n",paginas);
    }
    return 0;
}
