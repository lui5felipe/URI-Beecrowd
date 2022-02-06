#include <iostream>

using namespace std;

int main() {

    int X, Y, Cont=1, P1, P2;
    cin >> X >> Y;
    P1=X;
    P2=Y;
    while(X < Y)
    {
        P1=P1+X;
        Cont++;
        if(P1 < P2)
            break;
        else if(P1 == P2)
            break;
        else
            P2=P2+Y;
    }
    cout << Cont << endl;

    return 0;
}
