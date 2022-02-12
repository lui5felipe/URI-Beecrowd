#include<iostream>
#include<cstdio>

using namespace std;



int vet[52];
int changes;

void FuncaoMerge(int maisbaixo, int domeio, int maisalto);
void FuncaoMergeSort(int maisbaixo, int maisalto);

int main()
{
    int casos, tamanho;

    scanf("%d", &casos);

    while (casos--)
    {
        scanf("%d", &tamanho);

        for (int i=0; i < tamanho; i++)
            scanf("%d", &vet[i]);

        changes = 0;

        FuncaoMergeSort(0, tamanho-1);

        printf("Optimal train swapping takes %d swaps.\n", changes);
}
return 0;
}

void FuncaoMerge(int maisbaixo, int domeio, int maisalto)
{
    int n1, n2;

        n1 = domeio - maisbaixo + 1;
        n2 = maisalto - domeio;
        int vet1[n1+1], vet2[n2+1];

        for (int i=0; i < n1; i++)
            vet1[i] = vet[maisbaixo+i];
        for (int j=0; j < n2; j++)
            vet2[j] = vet[domeio+1+j];

            vet1[n1] = 10000000;
            vet2[n2] = 10000000;

            int i = 0, j = 0;
                for (int k = maisbaixo; k <= maisalto; k++)
                    if (vet1[i] <= vet2[j])
                        vet[k] = vet1[i++];
                    else
                    {
                        changes += ((domeio+1) - (maisbaixo+i));
                        vet[k] = vet2[j++];
                    }
}

void FuncaoMergeSort(int maisbaixo, int maisalto)
{
    if (maisbaixo < maisalto)
    {
        int domeio = (maisbaixo + maisalto) / 2;
        FuncaoMergeSort(maisbaixo, domeio);
        FuncaoMergeSort(domeio+1, maisalto);
        FuncaoMerge(maisbaixo, domeio, maisalto);
    }
}
