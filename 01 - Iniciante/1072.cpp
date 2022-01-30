#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int N, X, C, Cont=0;
    cin >> N;
    C = N;
    while(N--)
    {
        cin >> X;
        if(X>=10 && X<=20)
            Cont++;
    }
    cout << Cont << " in" << endl;
    cout << C-Cont << " out" << endl;
    return 0;
}
