/*
*File:main.c
*Author:LuisFelipe
*
*Createdon10deAgostode2014,00:08
*/

#include<stdio.h>
#include<stdlib.h>

/*
*
*/
int main()
{
  float a,b,c;
  scanf("%f %f %f",&a,&b,&c);
  
  if(((b-c)<a && a<(b+c)) && ((a-c)<b && b<(a+c)) && ((a-b)<c && (c<(a+b))))
    {
      printf("Perimetro = %.1f\n",(a+b+c));
    }
  else
    {
      printf("Area = %.1f\n",((a+b)*c)/2);
    }

return 0;
}