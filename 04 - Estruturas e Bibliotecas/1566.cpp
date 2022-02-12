#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#define Qtd 231

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
    int NC, N, i, d, maximo=0;
    scanf("%d",&NC);
    vector<int> vet;
    while(NC--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&d);
            vet.push_back(d);
        }
        vet=CountingSort(vet);
        for(i=0;i<vet.size();i++)
        {
            printf("%d",vet[i]);
            if(i!=(vet.size()-1))
                printf(" ");
        }
        vet.clear();
        printf("\n");
    }
}
