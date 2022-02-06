#include<iostream>
#include<iomanip>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int D, cont=0;
    double M=0.0;
    string nome;
    while(!cin.eof())
    {
        getline(cin,nome);
        cin >> D;
        getchar();
        M+=D;
        cont++;
    }
    cout.setf(ios::fixed);
    cout << setprecision(1) << M/cont << endl;
    return 0;
}
