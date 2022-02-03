#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int M, N, i, soma;

    while(cin >> M >> N)
    {
        if(N>M)
            cout << "Crescente" << endl;
        else if(M>N)
            cout << "Decrescente" << endl;
        if(M==N)
            return 0;
    }
}
