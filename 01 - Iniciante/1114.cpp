#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    string senha;

    while(cin >> senha)
    {
        if(senha=="2002")
        {
            cout << "Acesso Permitido" << endl;
            return 0;
        }
        else
            cout << "Senha Invalida" << endl;
    }
}
