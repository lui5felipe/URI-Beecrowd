#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    int i=1, base=7, j=base;
    while(i<=9)
    {
        cout << "I=" << i << " J=" << j << endl;
        if(j==(base-2))
        {
            base+=2;
            j=base;
            i+=2;
        }
        else
            j--;
    }
    return 0;
}
