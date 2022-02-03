#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int X, N;
    double n1, n2, n3;
    cout.setf(ios::fixed);
    cin >> N;
    while(N--)
    {
        cin >> n1 >> n2 >> n3;
        n1 = n1*0.2 + n2*0.3 + n3*0.5;
        cout << setprecision(1) << n1 << endl;
    }
    return 0;
}
