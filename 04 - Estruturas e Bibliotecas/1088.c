#include<stdio.h>
#include<stdlib.h>
#include<string>
 
 
 
int shellSort(int *vet, int tam) {
    int i , j , value, venc=0;
    int gap = 1;
    while(gap < tam) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tam; i++) {
            value = vet[i];
            j = i - gap;
            while (j >= 0 && value < vet[j]) {
                vet [j + gap] = vet[j];
                j -= gap;
                venc++;
            }
            vet [j + gap] = value;
        }
    }
    return venc;
}
 
int main(void)
{
    int N, i, t;
 
    while(scanf("%d",&N) && N>0)
    {
        int P[N];
        for(i=0;i<N;i++)
            scanf("%d",&P[i]);
        t=shellSort(P,N);
        if(t%2==0)
            printf("Carlos\n");
        else
            printf("Marcelo\n");
    }
    return 0;
}
