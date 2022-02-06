#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<math.h>
#include<cstdio>
using namespace std;

void Soma(double vet[12])
{
    int i;
    double soma=0.0;
    for(i=0;i<12;i++)
        soma+=vet[i];
    cout << setprecision(1) << soma << endl;
}

void Media(double vet[12])
{
    int i;
    double Media=0.0;
    for(i=0;i<12;i++)
        Media+=vet[i];
    Media/=12;
    cout << setprecision(1) << Media << endl;
}

int main()
{
    int L, i, j;
    double M[12][12];
    char T;
    cout.setf(ios::fixed);
    cin >> L;
    cin >> T;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            cin >> M[j][i];
    }
    if(T=='S')
        Soma(M[L]);
    else
        Media(M[L]);

    return 0;
}
