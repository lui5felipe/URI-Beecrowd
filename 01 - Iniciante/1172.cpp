#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int X[10],i=0;

    while(i<10)
    {
        cin >> X[i];
        if(X[i]<=0)
            X[i]=1;
        cout << "X[" << i << "] = " << X[i] << endl;
        i++;
    }
    return 0;
}
