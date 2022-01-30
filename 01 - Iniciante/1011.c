#include<stdio.h>
#include<stdlib.h>

#define pi 3.14159

int main()
{
int raio;
double volume;

scanf("%d",&raio);

volume = ((4*(pi)*raio*raio*raio)/3);

printf("VOLUME = %.3f\n",volume);
return 0;
}