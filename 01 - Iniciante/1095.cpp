#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    int i, j=60;
    for(i=1;j>=0;i=i+3)
    {
        cout << "I=" << i << " J=" << j << endl;
        j-=5;
    }
    return 0;
}
