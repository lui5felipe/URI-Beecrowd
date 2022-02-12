#include<cstdio>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{
    vector<char> frase;
    int i;
    char c;

    while(scanf("%c",&c)!=EOF)
    {

        if(c=='[')
        {
            i=0;
            while(scanf("%c",&c) && c!=']' && c!='\n')
            {
                if(c=='[')
                    i=0;
                else
                {
                    frase.insert(frase.begin()+i, c);
                    i++;
                }
            }
            if(c=='\n')
            {

                for (i=0; i<frase.size(); i++)
                printf("%c",frase[i]);
                frase.clear();
                printf("\n");
            }
        }
        else if(c=='\n')
        {

            for (i=0; i<frase.size(); i++)
                printf("%c",frase[i]);
            frase.clear();
            printf("\n");
        }
        else
        {
            if(c!=']')
                frase.push_back(c);
        }

    }
}
