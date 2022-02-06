#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

int main()
{
    int submissoes,  Tempo, ProblemasDistintos=0, TempoJulgado=0,i,Questoes[27];
    char Identificador, Julgamento[9];

    for(i=0;i<27;i++)
    {
        Questoes[i] = 0;
    }

    while(scanf("%d",&submissoes) && submissoes)
    {
        for(i=0;i<submissoes;i++)
        {
            scanf(" %c %d %[^\n]", &Identificador, &Tempo, Julgamento);

            if(!(strcmp("correct",Julgamento)))
            {
                ProblemasDistintos++;
                TempoJulgado+=Tempo+Questoes[Identificador-65];
            }
            else
            {
                Questoes[Identificador - 65]+=20;
            }
        }
        printf("%d %d\n",ProblemasDistintos, TempoJulgado);
        ProblemasDistintos=0;
        TempoJulgado=0;
        for(i=0;i<27;i++)
            Questoes[i]=0;

    }
    return 0;
}
