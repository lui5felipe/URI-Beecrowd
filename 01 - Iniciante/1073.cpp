#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int N, i=2;
    cin >> N;
    while(i <= N)
    {
        cout << i << "^" << 2 << " = " << i*i << endl;
        i += 2;
    }
    return 0;
}
