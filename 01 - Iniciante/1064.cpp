#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c=6, cont=0;
    float n, media=0.0;
    while(c--)
    {
        cin >> n;
        if(n>0.0)
        {
            cont++;
            media += n;
        }
    }
    cout << cont << " valores positivos" << endl;
    cout.setf(ios::fixed);
    cout << setprecision(1) << media/cont << endl;
    return 0;
}
