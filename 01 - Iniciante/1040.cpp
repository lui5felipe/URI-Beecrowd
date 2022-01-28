/* 
 * File:   main.c
 * Author: LuisFelipe
 *
 * Created on 10 de Agosto de 2014, 00:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main ()
{
  float p1, p2, p3, p4;
  float vs;
  
  scanf("%f %f %f %f",&p1,&p2,&p3,&p4);
  
  float media = ((p1*2+p2*3+p3*4+p4*1)/10);
  printf("Media: %.1f\n",media);
  if(media >= 7.0)
    printf("Aluno aprovado.\n");
  
  else if(media >= 5.0){
      printf("Aluno em exame.\n");
      scanf("%f",&vs);
      printf("Nota do exame: %.1f\n",vs);
      vs = ((vs+media)/2.0);
      if(vs > 5.0)
        printf("Aluno aprovado.\n");
      else
        printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n",vs);
  }
  else
    {
        printf("Aluno reprovado.\n");
    }
  
  
  
  return 0;
}
