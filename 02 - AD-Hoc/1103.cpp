#include <cstdio>
#include<iostream>

using namespace std;

int main()
{
    int H1, M1, H2, M2, tempo;



    while (scanf("%d %d %d %d",&H1, &M1, &H2, &M2)) // Leitura do horario de chegada e do horario inicial e final.
    {
        if(!H1 && !H2 && !M1 && !M2)
            break;
        tempo = 0;

        if (H1 == H2) // Se as horas forem iguais, comparo os minutos.
        {
            if (M1 > M2)
                tempo += 1380 + 60 - M1 + M2;
            else
                tempo += M2 - M1;
        }
        else // Se não forem tem de avaliar a desigualdade entre elas.
        {
            if (H1 > H2)
            {
                tempo += 24 - H1 + H2;
                tempo *= 60;
                tempo += M2 - M1;
            }
            else
            {
                tempo += H2 - H1;
                tempo *= 60;
                tempo += M2 - M1;
            }
        }
            printf ("%d\n", tempo);
    }
return 0;
}
