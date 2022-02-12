#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#define Qtd 1001

using namespace std;

vector<int> CountingSort(vector<int> &vet)
{
    int i;
    vector<int> c;
    c.resize(Qtd);

    for(i=0;i<vet.size();i++)
    {
        c[vet[i]]++;
    }
    for(i=1;i<Qtd;i++)
    {
        c[i]+=c[i-1];
    }
    vector<int> b;
    b.resize(vet.size());
    for(i=vet.size()-1;i>=0;i--)
    {
        b[--c[vet[i]]] = vet[i];
    }
    c.clear();
    return b;
}

int main()
{
    int N, M, d, cont=0, i;
    vector<int> notas;
    vector<int> pos;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&M);

        for(i=0;i<M;i++)
        {
            scanf("%d",&d);
            notas.push_back(d);
            pos.push_back(d);
        }

        notas=CountingSort(notas);

        for(i=0;i<M;i++)
        {
            if(notas[(M-1)-i]==pos[i])
                cont++;
        }
        printf("%d\n",cont);
        notas.clear();
        pos.clear();
        cont=0;
    }
    return 0;
}
