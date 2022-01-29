#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    cin >> str;
    if(str=="vertebrado")
    {
        cin >> str;
        if(str=="ave")
        {
            cin >> str;
            if(str=="carnivoro")
                cout << "aguia" << endl;
            else
                cout << "pomba" << endl;
        }
        else
        {
            cin >> str;
            if(str=="onivoro")
                cout << "homem" << endl;
            else
                cout << "vaca" << endl;
        }
    }
    else
    {
        cin >> str;
        if(str=="inseto")
        {
            cin >> str;
            if(str=="hematofago")
                cout << "pulga" << endl;
            else
                cout << "lagarta" << endl;
        }
        else
        {
            cin >> str;
            if(str=="hematofago")
                cout << "sanguessuga" << endl;
            else
                cout << "minhoca" << endl;
        }
    }

    return 0;
}
