#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;

int main()
{
    double N, Quantia, Tc=0.0, Ts=0.0, Tr=0.0, Total;
    char Tipo;
    double p;
    cout.setf(ios::fixed);
    cin >> N;
    while(N--)
    {
        cin >> Quantia >> Tipo;
        if(Tipo=='C')
            Tc+=Quantia;
        else if(Tipo=='S')
            Ts+=Quantia;
        else
            Tr+=Quantia;
    }
    Total = Tc+Ts+Tr;
    cout << "Total: " << setprecision(0) << Total << " cobaias" << endl;
    cout << "Total de coelhos: " << setprecision(0) << Tc << endl;
    cout << "Total de ratos: " << setprecision(0) << Tr << endl;
    cout << "Total de sapos: " << setprecision(0) << Ts << endl;
    printf ("Percentual de coelhos: %.2f %%\n",  (Tc/Total)*100);
    printf ("Percentual de ratos: %.2f %%\n",  (Tr/Total)*100);
    printf ("Percentual de sapos: %.2f %%\n",  (Ts/Total)*100);
    return 0;
}
