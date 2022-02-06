#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int X[10],i=0;
    cin >> X[i];
    cout << "N[" << i << "] = " << X[i] << endl;
    i++;
    while(i<10)
    {
        X[i]=X[i-1]*2;
        cout << "N[" << i << "] = " << X[i] << endl;
        i++;
    }
    return 0;
}
