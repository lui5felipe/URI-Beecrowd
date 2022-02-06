#include<stdio.h>
#include<stdlib.h>

int main()
{
    int j=0, teste[2], n1, n2, n3, n4,i;
    char d1, d2, operador,c;

    scanf("%d",&teste[0]);
    teste[1]=teste[0];

    int num[teste[0]],den[teste[0]],num2[teste[0]],den2[teste[0]];

    while(teste[0]!=0)
    {
        scanf("%d %c %d %c %d %c %d", &n1, &d1, &n2, &operador, &n3, &d2, &n4);

        if(operador=='+')
        {
                if(n2==n4)
                {
                    num[j] = n1+n3;
                    den[j] = d1;
                }
                else
                {
                    den[j] = (n2*n4);
                    num[j] = ((den[j]/n2)*n1) + ((den[j]/n4)*n3);
                }
        }
        if(operador=='-')
        {
                if(n2==n4)
                {
                    num[j] = n1-n3;
                    den[j] = d1;
                }
                else
                {
                    den[j] = n2*n4;
                    num[j] = ((den[j]/n2)*n1) - ((den[j]/n4)*n3);
                }
        }
        if(operador=='*')
        {
                num[j] = (n1*n3);
                den[j] = (n2*n4);
        }
        if(operador=='/')
        {
                num[j] = (n1*n4);
                den[j] = (n2*n3);
        }

        i=1;
        while(i<num[j] || i<den[j])
        {
            if(num[j]%i==0 && den[j]%i==0)
            {
                num2[j]=(num[j]/i);
                den2[j]=(den[j]/i);
            }
                i++;
        }
        teste[0]--;
        j++;
    }

    for(i=0;i<teste[1];i++)
    {
        printf("%d/%d = %d/%d\n",num[i],den[i],num2[i],den2[i]);
    }
    return 0;
}
