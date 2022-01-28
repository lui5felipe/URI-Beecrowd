#include<stdio.h>
#include<stdlib.h>

int main()
{
    double A, B, C, MEDIA;
    
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    
    A *= 0.2;
    B *= 0.3;
    C *= 0.5;
    
    MEDIA = (A+B+C);
    
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}