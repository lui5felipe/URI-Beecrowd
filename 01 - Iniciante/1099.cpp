#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int N, X, Y, i, soma;
    cin >> N;
    while(N--)
    {
        soma=0;
        cin >> X >> Y;
        if(X>Y)
        {
            i=Y;
            Y=X;
            X=i;
        }
        if(X%2==0)
            X++;
        else
            X+=2;
        for(i=X;i<Y;i=i+2)
            soma+=i;
        cout << soma << endl;
    }
    return 0;
}
