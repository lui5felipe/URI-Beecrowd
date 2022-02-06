#include <cstdio>
#include <stack> // Uso da biblioteca referente à pilha.

using namespace std;

int main()
{
    int tamanho, n, topodapilha, i;

    stack<int> estacaodetrem;

    bool confirmacao; //Criação de variável booleana para confirmar a chegada do trem.

    while (scanf("%d", &tamanho) && tamanho) // Confere o valor de tamanho.
    {
        scanf("%d",&n);
            while (n)
            {
                topodapilha = 1;
                confirmacao = true;

                for (i=0;i<tamanho;i++)
                {
                    if(i)
                        scanf("%d",&n);
                    if(confirmacao)
                    {
                        if (!estacaodetrem.empty() && estacaodetrem.top() == n)
                                estacaodetrem.pop();
                        else if (n>=topodapilha)
                        {
                            while (n!=topodapilha)
                                estacaodetrem.push(topodapilha++);
                                topodapilha++;
                        }
                        else
                        {
                            puts("No");
                            estacaodetrem = stack<int>(); // Esvaziando a pilha.
                            confirmacao = false;
                        }
                    }
                }
                if (confirmacao)
                    puts("Yes"); // Confirma a sequência dada.

                scanf("%d", &n);
}
                putchar('\n'); //Garantindo um /n no final
}
return 0;
}
