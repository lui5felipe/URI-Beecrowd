#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c=5, cont=0,  n;
    while(c--)
    {
        cin >> n;
        if(n%2==0)
        {
            cont++;
        }
    }
    cout << cont << " valores pares" << endl;
    return 0;
}
