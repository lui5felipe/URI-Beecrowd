#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N, PA, PB,cont=0;
    double G1, G2;

    scanf("%d",&N);
    while(N>0)
    {
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        while(PA<=PB)
        {
            PA+=PA*(G1/100);
            PB+=PB*(G2/100);
            cont++;
            if(cont>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(cont<=100)
        printf("%d anos.\n",cont);
        cont=0;
        N--;
    }

    return 0;
}
