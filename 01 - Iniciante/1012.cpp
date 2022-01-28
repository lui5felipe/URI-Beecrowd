#include<stdio.h>
#include<stdlib.h>

#define pi 3.14159

int main()
{
    double A, B, C, MEDIA, triangulo, circulo, trapezio, quadrado, retangulo;
    
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    
    triangulo = (A*C)/2;
    circulo = C*C*pi;
    trapezio = ((A+B)*C)/2;
    quadrado = B*B;
    retangulo = A*B;
    
    printf("TRIANGULO: %.3f\n",triangulo);
    printf("CIRCULO: %.3f\n",circulo);
    printf("TRAPEZIO: %.3f\n",trapezio);
    printf("QUADRADO: %.3f\n",quadrado);
    printf("RETANGULO: %.3f\n",retangulo);

    return 0;
}
