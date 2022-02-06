#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    char frase1[50], frase2[50];
    int i=0,teste;

    //freopen("teste.txt","r",stdin);

    scanf("%d",&teste);
    while(teste--)
    {
        i=0;
        scanf(" %s",frase1);
        scanf(" %s",frase2);

        while(i<strlen(frase1) && i<strlen(frase2))
        {
            putchar(frase1[i]);
            putchar(frase2[i]);
            i++;
        }
        if(i==strlen(frase1))
        {
            while(i<strlen(frase2))
            {
                putchar(frase2[i]);
                i++;
            }
        }
        else if(i==strlen(frase2))
        {
            while(i<strlen(frase1))
            {
                putchar(frase1[i]);
                i++;
            }
        }
        putchar('\n');
    }
    return 0;
}
