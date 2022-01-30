#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

  int x1, x2, y1, y2;
  double distancia;

  scanf("%d %d",&x1, &y1);
  scanf("%d %d",&x2, &y2);

  distancia = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );

  printf("%.4f\n",distancia);
  return 0;
}
