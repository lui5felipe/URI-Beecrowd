#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int Casos, NumEstudantes, DiasDeAula, Presenca;
    double TotalFreq;
    char NomesAlunos[101][101], Frequencias[10000];
    bool ConfirmaAluno=true;

    scanf("%d", &Casos);
    while (Casos--)
    {
        scanf("%d", &NumEstudantes);
            for (int i = 0; i < NumEstudantes; i++)
            cin >> NomesAlunos[i];


        for (int i = 0; i < NumEstudantes; i++)
        {
            cin >> Frequencias;
            int tam = strlen(Frequencias);
            Presenca = DiasDeAula = 0;
                for (int j = 0; j < tam; j++)
                    if (Frequencias[j] != 'M')
                    {
                        if (Frequencias[j] == 'P')
                        Presenca++;
                        DiasDeAula++;
                    }
            TotalFreq = (double)Presenca / DiasDeAula;
            if (TotalFreq < 0.75)
            {
                if (!ConfirmaAluno) printf(" ");
                printf("%s", NomesAlunos[i]);
                ConfirmaAluno = false;
            }
        }
        putchar('\n');
        ConfirmaAluno = true;
    }
return 0;
}
