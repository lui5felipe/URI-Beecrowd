#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int pos, N, t=100, m=0;
    while(t--)
    {
        cin >> N;
        if(m<N)
        {
            m=N;
            pos = 100-t;
        }
    }
    cout << m << endl << pos << endl;
    return 0;
}
