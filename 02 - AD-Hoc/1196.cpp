#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

int main()
{
    map <char,char> frase, i;
    char c;
    frase['Q']='\t';
    frase['W']='Q';
    frase['E']='W';
    frase['R']='E';
    frase['T']='R';
    frase['Y']='T';
    frase['U']='Y';
    frase['I']='U';
    frase['O']='I';
    frase['P']='O';
    frase['[']='P';
    frase[']']='[';
    frase['\\']=']';
    frase['S']='A';
    frase['D']='S';
    frase['F']='D';
    frase['G']='F';
    frase['H']='G';
    frase['J']='H';
    frase['K']='J';
    frase['L']='K';
    frase[';']='L';
    frase['\'']=';';
    frase['X']='Z';
    frase['C']='X';
    frase['V']='C';
    frase['B']='V';
    frase['N']='B';
    frase['M']='N';
    frase[',']='M';
    frase['.']=',';
    frase['/']='.';
    frase['1']='`';
    frase['2']='1';
    frase['3']='2';
    frase['4']='3';
    frase['5']='4';
    frase['6']='5';
    frase['7']='6';
    frase['8']='7';
    frase['9']='8';
    frase['0']='9';
    frase['-']='0';
    frase['=']='-';

    while(scanf("%c",&c)!=EOF)
    {
        if(c==' ')
            printf("%c",c);
        else if(c!='\n')
            cout << frase[c];
        else
            printf("\n");
    }

    return 0;
}
