#include<iostream>
#include<map>
using namespace std;

int main()
{
    map <int, string> DDD;
    int ddd;
    DDD[61]="Brasilia";
    DDD[71]="Salvador";
    DDD[11]="Sao Paulo";
    DDD[21]="Rio de Janeiro";
    DDD[32]="Juiz de Fora";
    DDD[19]="Campinas";
    DDD[27]="Vitoria";
    DDD[31]="Belo Horizonte";

    cin >> ddd;
    if(DDD.find(ddd) != DDD.end())
        cout << DDD[ddd] << endl;
    else
        cout << "DDD nao cadastrado" << endl;
    return 0;
}
