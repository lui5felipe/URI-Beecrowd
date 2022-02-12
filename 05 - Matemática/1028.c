#include<stdio.h>
#include<stdlib.h>

int main()
{
    int casos, f1, f2,j=0,i,mdc=0,mdc2=0,cd;
    scanf("%d",&casos);
    cd = casos;

    int vet[casos];

    for(i=0;i<cd;i++)
        vet[i]=0;
    i=1;
    while(casos!=0)
    {
        scanf("%d %d",&f1,&f2);
        if(f1%f2==0)
        {
            i = f2;
        }
        else if(f2%f1==0)
        {
            i = f1;
        }
        else if(f1>f2)
        {
            while(f2!=0)
            {
                mdc = f1%f2;
                f1 = f2;
                f2 = mdc;
                i = f1;
            }
        }
        else
        {
            while(f1!=0)
            {
                mdc2 = f2%f1;
                f2 = f1;
                f1 = mdc2;
                i = f2;
            }
        }
        vet[j]=i;
        j++;
        casos--;
    }
    for(i=0;i<cd;i++)
        printf("%d\n",vet[i]);
    return 0;
}
