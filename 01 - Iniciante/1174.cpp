#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    double A[100];
    int i;
    for(i=0;i<100;i++)
    {
        cin >> A[i];
        if(A[i]<=10)
            cout << "A[" << i << "] = " << setprecision(1) << A[i] << endl;
    }
    return 0;
}
