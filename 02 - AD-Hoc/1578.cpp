#include<iostream>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int N, M, i, j, num=4;
    long long int mat [100][100];
    freopen("teste.txt","r",stdin);
    cin >>N;
    while(N--)
    {
        cin >> M;
        if(M!=0)
        {
            for(i=0;i<M;i++)
                for(j=0;j<M;j++)
                    cin >> mat[i][j];

            cout << "Quadrado da matriz #" << num << ":" << endl;
            for(i=0;i<M;i++)
            {
                for(j=0;j<M;j++)
                    cout << (mat[i][j]*mat[i][j]) << " ";
                cout << endl;
            }
num++;
        }
    }
    return 0;
}
