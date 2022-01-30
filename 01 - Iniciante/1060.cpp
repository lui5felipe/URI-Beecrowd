#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c=6, cont=0;
    float n;
    while(c--)
    {
        cin >> n;
        if(n>0.0)
            cont++;
    }
    cout << cont << " valores positivos" << endl;
    return 0;
}
