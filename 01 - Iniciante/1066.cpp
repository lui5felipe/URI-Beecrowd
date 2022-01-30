#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c=5, cont=0, cont2=0, contp=0, conti=0, n;
    while(c--)
    {
        cin >> n;
        if(n%2==0)
            contp++;
        else
            conti++;
        if(n>0)
            cont++;
        else if(n<0)
            cont2++;
    }
    cout << contp << " valor(es) par(es)" << endl;
    cout << conti << " valor(es) impar(es)" << endl;
    cout << cont << " valor(es) positivo(s)" << endl;
    cout << cont2 << " valor(es) negativo(s)" << endl;
    return 0;
}
