#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int B, N, D, C, V, reserva[20],i,cont=0;
    scanf("%d %d",&B,&N);
    while(B!=0 && N!=0)
    {
        for(i=0;i<B;i++)
            scanf("%d",&reserva[i]);
        for(i=0;i<B;i++)
        {
            scanf("%d %d %d",&D,&C,&V);
            reserva[D-1]-=V;
            reserva[C-1]+=V;

        }
        for(i=0;i<B;i++)
        {
            if(reserva[i]>=0)
                cont++;
        }
        if(cont==3)
            printf("S\n");
        else
            printf("N\n");
        cont=0;
        scanf("%d %d",&B,&N);
    }
    return 0;
}
