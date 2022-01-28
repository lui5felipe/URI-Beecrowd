#include<stdio.h>
#include<stdlib.h>

int main()
{
int N1, HORAS;
double valor, salario;

scanf("%d",&N1);
scanf("%d",&HORAS);
scanf("%lf",&valor);

salario = HORAS*valor;
printf("NUMBER = %d\n",N1);
printf("SALARY = U$ %.2f\n",salario);
return 0;
}