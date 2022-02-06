#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    int n, X, Y;
    cin >> n;
    while(n--)
    {
        cin >> X >> Y;
        if(Y==0)
            cout << "divisao impossivel" << endl;
        else
            cout << setprecision(1) << ((double)X/(double)Y) << endl;
    }
    return 0;
}
