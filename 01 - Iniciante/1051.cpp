#include<iostream>
#include<iomanip>
#include<map>
using namespace std;

int main()
{
    float valor;
    cin >> valor;
    cout.setf(ios::fixed);
    if(valor > 4500.00)
        {
            valor = (10*8)+(15*18)+((valor-4500.0)*28)/100;
            cout << setprecision(2) <<"R$ " << valor << endl;
        }
    else if(valor > 3000.01)
        {
            valor = (10*8)+((valor-3000.0)*18)/100;
            cout << setprecision(2) << "R$ " << valor << endl;
        }
    else if(valor > 2000.01)
        {
            valor = ((valor-2000.0)*8.0)/100.0;
            cout << setprecision(2) << "R$ " << valor << endl;
        }
    else
        cout << "Isento" << endl;
    return 0;
}
