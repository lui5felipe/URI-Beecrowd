#include<cstdio>
#include<cstdlib>
#include<stack>

using namespace std;

int main()
{
    stack<char> estacao;
    char c;
    int N, i, j;
    while(scanf("%d",&N) && N!=0)
    {

        char entrada[N+1], saida[N+1];
        for(i=0;i<N;i++)
        {
            scanf(" %c",&entrada[i]);
        }
        entrada[i]='\0';
        for(i=0;i<N;i++)
        {
            scanf(" %c",&saida[i]);
        }
        saida[i]='\0';
        i=0; j=0;
        estacao.push('0');
        while(i<N || j<N)
        {
            if(saida[j]==estacao.top())
            {
                estacao.pop();
                printf("R");
                j++;
            }
            else if(entrada[i]==saida[j])
            {
                i++;
                j++;
                printf("IR");
            }
            else if(i==N && (saida[j]!=estacao.top()))
            {
                printf(" Impossible");
                break;
            }
            else
            {
                estacao.push(entrada[i]);
                i++;
                printf("I");
            }
        }
        printf("\n");
    }
}
