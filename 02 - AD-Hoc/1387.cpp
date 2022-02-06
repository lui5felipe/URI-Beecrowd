#include<iostream>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int L, R;
    while(scanf("%d %d",&L,&R) && L!=0 && R!=0)
    {
        printf("%d\n",L+R);
    }
    return 0;
}
