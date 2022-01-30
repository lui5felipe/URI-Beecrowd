#include<stdio.h>

int main(void)
{
    double a,b,c,aux;

    scanf("%lf %lf %lf",&a,&b,&c);

    if(b>a && b>=c)
    {
        aux=b;
        b=a;
        a=aux;
    }
    else if(c>a && c>=b)
    {
        aux=c;
        c=a;
        a=aux;
    }

    if(a >= (b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if((a*a) == ((b*b)+(c*c)))
        printf("TRIANGULO RETANGULO\n");
    else if((a*a) > (b*b)+(c*c))
        printf("TRIANGULO OBTUSANGULO\n");
    else if((a*a) < (b*b)+(c*c))
        printf("TRIANGULO ACUTANGULO\n");
    if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
    else if((a==b && b!=c) || (a==c && c!=b) || (b==c && c!=a))
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}
