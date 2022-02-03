#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    float i=0.0, j=1.0;
    while(i<=2.0)
    {
        if(i==0.0 || i==1.0)
            cout << "I=" << setprecision(0) << i << " J=" << j+i << endl;
        else
            cout << "I=" << setprecision(1) << i << " J=" << j+i << endl;
        if(j>=3.0)
        {
            j=1;
            i+=0.2;
        }
        else
            j+=1.0;
    }
    cout << "I=" << setprecision(0) << i << " J=" << j+i << endl;
    cout << "I=" << setprecision(0) << i << " J=" << j+i+1.0 << endl;
    cout << "I=" << setprecision(0) << i << " J=" << j+i+2.0 << endl;
    return 0;
}
