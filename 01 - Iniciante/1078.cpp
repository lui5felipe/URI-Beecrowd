#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int X=1, N;
    cin >> N;
    while(X<=10)
    {
        cout << X << " x " << N << " = " << X*N <<  endl;
        X++;
    }
    return 0;
}
