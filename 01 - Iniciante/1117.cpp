#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    int n=0;
    double X, Y=0.0;
    while(n<2)
    {
        cin >> X;
        if(X<0.0 || X>10.0)
            cout << "nota invalida" << endl;
        else
        {
            Y+=X;
            n++;
        }
    }
    Y/=2.0;
    cout << "media = " << setprecision(2) << Y << endl;
    return 0;
}
