#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int N, X;
    cin >> N;
    while(N--)
    {
        cin >> X;
        if (X==0)
            cout << "NULL" << endl;
        else if(X%2==0)
        {
            if(X>0)
                cout << "EVEN POSITIVE" << endl;
            else
                cout << "EVEN NEGATIVE" << endl;
        }
        else
        {
            if(X>0)
                cout << "ODD POSITIVE" << endl;
            else
                cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}
