#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n, i, T;
    cin >> T;
    while(T--)
    {
        cin >> n;
        long long int vet[n];
        if(n==0)
            cout << "Fib(" << n << ") = " << 0 << endl;
        else if(n==1)
            cout << "Fib(" << n << ") = " << 1 << endl;
        else
        {
            vet[0]=1;
            vet[1]=1;
            for(i=2;i<n;i++)
            {
                vet[i]=vet[i-1]+vet[i-2];
            }
            cout << "Fib(" << n << ") = " << vet[n-1] << endl;
        }
    }
    return 0;
}
