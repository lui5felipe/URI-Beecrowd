#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N, i, cont[2]={0,0};
    scanf("%d",&N);
    while(N!=0)
    {
        int vet[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&vet[i]);
            if(vet[i]==0)
                cont[0]++;
            else
                cont[1]++;
        }
        printf("Mary won %d times and John won %d times\n",cont[0],cont[1]);
        cont[0]=cont[1]=0;
        scanf("%d",&N);
    }
    return 0;
}
