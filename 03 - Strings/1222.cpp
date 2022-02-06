#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
 
using namespace std;
 
int main()
{
    int NumPalavras, NumLinhas, MaxCaractere, i, TamanhoStringAtual, QuantidadeLinhasAtual=0, NumerodePaginas;
    char Palavra[80];
 
    while(scanf("%d %d %d", &NumPalavras, &NumLinhas, &MaxCaractere)!= EOF)
    {
        TamanhoStringAtual=0;
        QuantidadeLinhasAtual=0;
        for(i=0;i<NumPalavras;i++)
        {
            scanf(" %[^\n]", Palavra);
            TamanhoStringAtual += strlen(Palavra)+1;
            //Teste
            //TamanhoStringAtual++;
            //TamanhoStringAtual += 1;
 
            if(TamanhoStringAtual > (MaxCaractere+1))
            {
                QuantidadeLinhasAtual++;
                TamanhoStringAtual = strlen(Palavra)+1;
                //Teste
            }
            if(TamanhoStringAtual == MaxCaractere || TamanhoStringAtual-1 == MaxCaractere)
            {
                QuantidadeLinhasAtual++;
                TamanhoStringAtual=0;
            }
            /*if(TamanhoStringAtual-1 == MaxCaractere)
            {
                QuantidadeLinhasAtual++;
                TamanhoStringAtual=0;
            }*/
            else if(i==NumPalavras-1)
            {
                QuantidadeLinhasAtual++;
            }
 
        }
         NumerodePaginas = (QuantidadeLinhasAtual + (NumLinhas-1))/NumLinhas;
         printf("%d\n", NumerodePaginas);
    }
    return 0;
}