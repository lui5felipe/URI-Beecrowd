#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

  int tempo, velocidade;
  double litros;

  scanf("%d",&tempo);
  scanf("%d",&velocidade);

  litros = tempo*velocidade;

  printf("%.3f\n",(litros/12));
  return 0;
}
