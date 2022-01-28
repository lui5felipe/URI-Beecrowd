#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    double n1;
    scanf("%lf",&n1);
    if(n1<0.0 || n1>100.0)
        printf("Fora de intervalo\n");
    else if(n1<=25.0)
        printf("Intervalo [0,25]\n");
    else if(n1<=50.0)
        printf("Intervalo (25,50]\n");
    else if(n1<=75.0)
        printf("Intervalo (50,75]\n");
    else
        printf("Intervalo (75,100]\n");
    return 0;
}
