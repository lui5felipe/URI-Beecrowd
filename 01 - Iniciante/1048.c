    #include<stdio.h>
    #include<math.h>

    int main(void)
    {
        float sal,sal2;

        scanf("%f",&sal);
        if(sal<=400.00)
        {
            sal2=sal;
            sal*=1.15;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",sal,fabs(sal2-sal));
        }
        else if(sal<=800.00)
        {
            sal2=sal;
            sal*=1.12;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",sal,fabs(sal2-sal));
        }
        else if(sal<=1200.00)
        {
            sal2=sal;
            sal*=1.10;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",sal,fabs(sal2-sal));
        }
        else if(sal<=2000.00)
        {
            sal2=sal;
            sal*=1.07;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",sal,fabs(sal2-sal));
        }
        else
        {
            sal2=sal;
            sal*=1.04;
            printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",sal,fabs(sal2-sal));
        }
        return 0;
    }
