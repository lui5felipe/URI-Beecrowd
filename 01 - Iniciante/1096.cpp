#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    int i=1, j=7;
    while(i<=9)
    {
        cout << "I=" << i << " J=" << j << endl;
        if(j==5)
        {
            j=7;
            i+=2;
        }
        else
            j--;
    }
    return 0;
}
