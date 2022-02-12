#include<stdio.h>
#include<stdlib.h>

int calls=0;

int fibo(int n)
{
    if(n==0)
    {
        calls++;
        return 0;
    }
    else if(n==1)
    {
        calls++;
        return 1;
    }
    else
    {
        calls++;
        return (fibo(n-1)+fibo(n-2));
    }
}

int main(void)
{
    int n,t,v;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        v=fibo(n);
        printf("fib(%d) = %d calls = %d\n",n,calls-1,v);
        calls=0;
        t--;
    }
}
