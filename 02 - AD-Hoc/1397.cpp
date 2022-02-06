#include<iostream>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int N, A, B, J1, J2;
    while(cin >> N && N!=0)
    {
        J1=J2=0;
        while(N--)
        {
            cin >> A >> B;
            if(A>B)
                J1++;
            else if(A<B)
                J2++;
        }
        cout << J1 << " " << J2 << endl;
    }
    return 0;
}
