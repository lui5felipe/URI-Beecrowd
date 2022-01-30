#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vcarrox=60, vcarroy=90, tempo, dist;
    
    scanf("%d",&dist);
    
    tempo = (vcarroy/60)*dist + (vcarrox/60)*dist;
    
    printf("%d minutos\n",tempo);
    return 0;
}
