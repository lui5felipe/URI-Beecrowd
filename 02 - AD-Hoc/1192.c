#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N, O1, O2;
    char L;

    while(scanf("%d",&N)!=EOF)
    {
        while(N--)
        {
            scanf("%d %c %d",&O1, &L, &O2);
            if(O1==O2)
                printf("%d\n",O1*O2);
            else if(L>=65 && L<=92)
                printf("%d\n",O2-O1);
            else
                printf("%d\n",O1+O2);
        }
    }


    return 0;
}
