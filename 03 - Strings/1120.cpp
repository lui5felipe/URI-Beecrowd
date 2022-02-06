#include<iostream>
#include<iomanip>
#include<string.h>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int tam, i, flag=0, aux=0;
    char D, mem='1';
    string N;


    while (cin >> D >> N && (D!='0' || N!="0"))
    {
        tam = N.size();
        for(i=0;i<tam;i++)
        {
            if(N[i]=='0' && mem=='0')
            {
                mem='0';
            }
            else if(N[i]==D)
            {
                mem=D;
            }
            else
            {
                if(N[i]!='0')
                {
                    if(aux>0 && flag==1)
                    {
                        while(aux--)
                            cout << 0;
                    }
                    cout << N[i];
                    aux=0;
                    flag=1;
                }
                else
                {
                    aux++;
                }
                //mem=N[i];

            }
        }
        if(flag==0)
            cout << 0;
        else
         {
             while(aux--)
                cout << 0;
         }
        cout << endl;
        flag=0;
    }
}
