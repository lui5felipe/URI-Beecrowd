#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, x, y, soma=0;
    cin >> x;
    cin >> y;
    if(x>y)
    {
        i=x;
        x=y;
        y=i;
    }
    x++;
    y--;
    for(i=x;i<=y;i++)
    {
        if(i%2!=0)
            soma = (i + soma);
    }
    cout << soma << endl;
    return 0;
}
