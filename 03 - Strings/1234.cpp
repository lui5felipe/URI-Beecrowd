#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
   // freopen("teste.txt","r",stdin);
    char frase[50];
    int i=0,j=0;

    while(gets(frase))
    {
        i=j=0;
        while(frase[i]!='\0')
        {
            if(frase[i]!=' ')
            {
                if(j%2==0)
                frase[i]=toupper(frase[i]);
                else if(j%2!=0)
                frase[i]=tolower(frase[i]);
                j++;
            }
            i++;
        }
        cout << frase << endl;
    }
}
