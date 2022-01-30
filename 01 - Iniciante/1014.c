#include<stdio.h>
#include<stdlib.h>

int main()
{
    int X;
    double Y, cons;
    
    scanf("%d",&X);
    scanf("%lf",&Y);
    
    cons = X/Y;
    
    printf("%.3f km/l\n",cons);
    return 0;
}
