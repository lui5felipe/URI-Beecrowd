#include<stdio.h>
#include<stdlib.h>

int main()
{

  int idade, aux, anos, meses, dias;

  scanf("%d",&idade);
  
  anos = idade/365;
  meses = (idade - (anos*365))/30;
  dias = (idade - ((meses*30)+(anos*365)));
  
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
  return 0;
}
