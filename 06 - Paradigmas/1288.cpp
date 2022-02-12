#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int MatrizAuxiliar[1000][1000];

int Calcula_Valor_Mochila(int* PoderProjetil, int* PesoProjetil, int CapacidadeCanhao, int Itens)
{
    int i, j; //linha -> item, coluna -> tamanho
    int MatrizResultado[Itens][CapacidadeCanhao];


    for(i=0;i<CapacidadeCanhao+1;i++)
    {
        MatrizResultado[0][i]=0;
    }
    for(i=1; i<Itens+1; i++)
    {
        MatrizResultado[i][0]=0;
    }

    for(i=1;i<Itens;i++)
    {
        for(j=1;j<CapacidadeCanhao;j++)
        {
            MatrizResultado[i][j]=MatrizResultado[i-1][j];
            if((PesoProjetil[i]<= j) && ((PoderProjetil[i] + MatrizResultado[i-1][j - PesoProjetil[i]]) > MatrizResultado[i][j] ))
            {
               MatrizResultado[i][j] = PoderProjetil[i] + MatrizResultado[i-1][j-PesoProjetil[i]];
            }
        }
    }
    for(i=0;i<Itens;i++)
        for(j=0;j<CapacidadeCanhao;j++)
            MatrizAuxiliar[i][j] = MatrizResultado[i][j];

    return MatrizResultado[Itens][CapacidadeCanhao];
}

void Aux_Gera_Solucao(int QtdItens, int CapacidadeTemporaria, int* PesoProjetil, int* Vetor)
{ // Auxilia a função solução.  (Ultimo cara da matriz, Peso temporário)

    if(QtdItens!=0)
    { // Se o número de itens não é zero:

        if(MatrizAuxiliar[QtdItens][CapacidadeTemporaria]==MatrizAuxiliar[QtdItens-1][CapacidadeTemporaria] )
        { // Comparação dos elementos de cima e do lado esquerdo.
            Vetor[QtdItens]=0;
            Aux_Gera_Solucao(QtdItens-1, CapacidadeTemporaria, PesoProjetil, Vetor);
        }
        else
        { // Se forem diferentes marca a coluna como solução.
            Vetor[QtdItens]=1;
            Aux_Gera_Solucao(QtdItens-1, CapacidadeTemporaria-PesoProjetil[QtdItens], PesoProjetil, Vetor); // Sobe de linha e diminui o peso.
        }

    }

}

void Gera_Solucao(int* PesoProjetil, int CapacidadeCanhao, int NumProjeteis, int ResistenciaCastelo, int* PoderProjetil){ // Fala quais são os elementos da mochila.

    int i,Qtd=0;
    int Vetor[NumProjeteis+1];

    for(i=0;i<(NumProjeteis+1);i++)
    { //Inicializa o vetor.
        Vetor[i]=0;
    }

    Aux_Gera_Solucao(NumProjeteis, CapacidadeCanhao, PesoProjetil, Vetor); //  Chama a função para executar a geração da solução.

    for(i=0; i< NumProjeteis; i++)
    {
        if(Vetor[i]==1)
        {

        }
        Qtd += PoderProjetil[i];
    }

    if(Qtd < ResistenciaCastelo)
        printf("Falha na missao\n");
    else
        printf("Missao completada com sucesso\n");

}

int main(void){


    int Teste, NumProjeteis, auxTeste, CapacidadeCanhao, ResistenciaCastelo, QuantidadeFinal, Conta;
    int i;


    scanf("%d",&Teste);
    auxTeste = Teste;
    while(Teste!=0)
    {
        scanf("%d",&NumProjeteis);
        int *PoderProjetil = (int*)calloc(NumProjeteis,sizeof(int)); //Poder = Valor
        int *PesoProjetil = (int*)calloc(NumProjeteis,sizeof(int));  // Peso = Peso

        for(i=0;i<NumProjeteis;i++)
        {
            scanf("%d %d",&PoderProjetil[i],&PesoProjetil[i]);
        }
        scanf("%d",&CapacidadeCanhao); // Capacidade da Mochila.
        scanf("%d",&ResistenciaCastelo);

        QuantidadeFinal = Calcula_Valor_Mochila(PoderProjetil, PesoProjetil, CapacidadeCanhao, NumProjeteis);


        Gera_Solucao(PesoProjetil, CapacidadeCanhao, NumProjeteis, ResistenciaCastelo, PoderProjetil);


        free(PoderProjetil);
        free(PesoProjetil);
        Teste--;
    }

    return 0;
}

