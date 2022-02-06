#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int linhas, i, tam;
    char txt[1002];
    scanf("%d", &linhas);
    getchar(); // '\n'
    while (linhas--)
    {
        fgets(txt, 1002, stdin);
        tam = strlen(txt) - 1; // fgets pega o '\n'
        // 1a passada. Desloca 3 posicoes se for letra
        for (i = 0; i < tam; i++)
            if ((txt[i] >= 'a' && txt[i] <= 'z') ||
                    (txt[i] >= 'A' && txt[i] <= 'Z'))
                txt[i] += 3;
        // 2a passada. Inverte string
        reverse(txt, txt + tam);
        // 3a passada
        for (i = tam / 2; i < tam; i++)
            txt[i]--;
        fputs(txt, stdout);
    }
    return 0;
}
