#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int M, N, i, soma;

    while((cin >> M >> N) && (M>0 && N>0))
    {
        soma=0;
        if(M>N)
        {
            i=N;
            N=M;
            M=i;
        }
        for(i=M;i<=N;i++)
         {
             cout << i << " ";
             soma+=i;
         }
        cout << "Sum=" << soma << endl;
    }
    return 0;
}
