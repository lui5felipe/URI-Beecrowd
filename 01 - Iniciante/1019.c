#include<stdio.h>
#include<stdlib.h>

int main()
{

  int N, aux, horas, minutos, segundos;

  scanf("%d",&N);
  
  horas = N/3600;
  minutos = (N - (horas*3600))/60;
  segundos = (N - ((minutos*60)+(horas*3600)));
  
  printf("%d:%d:%d\n", horas, minutos, segundos);
  return 0;
}
