#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
    int casos,num,n,aux=0, total=0, i=0, soma=0, maior=0;

    while(scanf("%d",&casos))
    {
        scanf("%d",&num);
            soma = 0;
            maior = 0;
            i=0;
            int permutacao[num];
            aux = num;
            while(i<aux)
            {
                scanf("%d",&permutacao[i]);
                i++;
            }
            std::sort (permutacao,permutacao+num);
            while(next_permutation(permutacao,permutacao+num))
            {
                soma = 0;
                for(int i=0;i<(num-1);i++)
                {
                    soma += abs(permutacao[i]-permutacao[i+1]);
                }
                if(maior < soma)
                    maior = soma;
            }
            total++;
            printf("Case %d: %d\n",total,maior);
    }
    return 0;
}
