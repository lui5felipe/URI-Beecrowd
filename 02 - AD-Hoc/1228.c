#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<map>

int bubble( int v[], int v2[],int qtd)
{
  int i=0, cont=0, j, aux;
  //int k = qtd - 1 ;
    for(i=0;i<qtd;i++)
     for(j=i;j<qtd-1;j++)
     {
         //printf("%d\n",v[i]);
        if(v[i]!=v2[i])
        {
            aux=v[i];
            v[i]=v[j+1];
            v[j+1]=aux;
            cont++;
        }
        else
        {
            break;
        }
  }
  return cont;
}

int main()
{

    int n,i,pos;
    while(scanf("%d",&n)!=EOF)
    {
        int gridl[n], gridc[n];
        for(i=0;i<n;i++)
            scanf("%d",&gridl[i]);
        for(i=0;i<n;i++)
            scanf("%d",&gridc[i]);
        pos=bubble(gridl,gridc,n);
        printf("%d\n",pos);
    }


	return 0;
}
