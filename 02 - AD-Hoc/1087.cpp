#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int x1,y1,x2,y2;

    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)&& x1 && y1 && x2 && y2)
    {
        if(!x1 && !x2 && !y1 && !y2)
                break; // Se todos forem nulos, sai do programa.

        else if (x1 == x2 && y1 == y2)
                printf ("0\n"); //Se todos forem iguais não vão se mexer.

        else if (x1 == x2 || y1 == y2)
            printf ("1\n"); // Se a ordenada e a abscissa forem iguais, um movimento possível.

        else if ((x1-x2)*(x1-x2) == (y1-y2)*(y1-y2))
            printf ("1\n"); // O mesmo ocorre se a multiplicação entre as duas forem identicas.

        else
            printf ("2\n"); // Caso contrário dá pra fazer dois movimentos.
    }

return 0;

}
