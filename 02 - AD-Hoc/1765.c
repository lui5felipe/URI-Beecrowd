#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int T, Q, i;
    double A, B;
    scanf("%d",&T);
    while(T!=0)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d %lf %lf",&Q,&A,&B);
            printf("Size #%d:\nIce Cream Used: %.2lf cm2\n",i+1,Q*(((A+B)*5)/2));
        }
        scanf("%d",&T);
        printf("\n");
    }
    return 0;
}
