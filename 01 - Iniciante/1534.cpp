#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
#include<cstdio>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while(!cin.eof())
    {
        int mat[N][N], i, j;
        for(i=0;i<N;i++)
            for(j=0;j<N;j++)
            {
                if((i+j)==(N-1))
                    mat[i][j]=2;
                else if(i==j)
                    mat[i][j]=1;
                else
                    mat[i][j]= 3;
            }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
                cout << mat[i][j];
            cout << endl;
        }
        cin >> N;
    }
    return 0;
}
