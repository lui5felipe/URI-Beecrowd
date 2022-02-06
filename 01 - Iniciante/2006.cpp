#include <iostream>
 
using namespace std;
 
int main() {
 
    int T, A, c=5, Cont=0;
    cin >> T;
    while(c--)
    {
        cin >> A;
        if(A==T)
            Cont++;
    }
    cout << Cont << endl;
 
    return 0;
}