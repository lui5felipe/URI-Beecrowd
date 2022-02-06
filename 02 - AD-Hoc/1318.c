#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m, aux, i, j, c=0;
    int cont[500];
    int *T;

    for(i=0;i<500;i++)
    {
        cont[i]=0;
    }

    scanf("%d %d",&n,&m);

    while(n!=0 && m!=0)
    {

    T=(int*)malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    {
        scanf("%d",&T[i]);
    }

    for(i=0;i<m;i++)
    {
        aux=cont[c];
        for(j=(i+1);j<m;j++)
        {
            if(T[i]==T[j] && T[j]!=0 && T[i]!=0 && aux==cont[c])
            {
                cont[c]++;
                T[j]=0;
            }
            if(T[i]==T[j] && T[j]!=0 && T[i]!=0 && aux!=cont[c])
            {
                T[j]=0;
            }
        }
        T[i]=0;
    }
    c++;
    scanf("%d %d",&n,&m);
    }
    for(i=0;i<c;i++)
    printf("%d\n",cont[i]);
}
