#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n1, n2, tam, seq,i,j,cont=0,pos;

    scanf("%d %d",&tam,&seq);
    int vet[tam];

        for(i=0;i<tam;i++)
        {
            scanf("%d ",&vet[i]);
        }

    while(seq!=0)
    {
            scanf("%d %d",&n1,&n2);
            cont = 0;
            for(j=0;j<tam;j++)
            {
                if(vet[j]==n1 && vet[j+1]==n2)
                {
                    cont = 1;
                    pos=j;
                }
                if(vet[j]==n1 && vet[j+1]!=n2)
                {
                    break;
                }
            }
            if(cont==0)
            printf("0\n");
            if(cont==1)
            printf("%d\n",pos+2);
        seq--;
    }
    return 0;
}
