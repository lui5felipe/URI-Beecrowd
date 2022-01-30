#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int X=1, N;
    cin >> N;
    while(X<10000)
    {
        if(X%N==2)
            cout << X << endl;
        X++;
    }
    return 0;
}
