#include <cstdio>
#include <cstring>
int main()
{
    int parenteses;
    char exp[1001], *c;
    while (gets(exp) != NULL)
    {
        parenteses = 0;
        c = exp;
        while (*c != '\0')
        {
            if (*c == '(')
                parenteses++;
            else if (*c == ')')
            {
                parenteses--;
                if (parenteses < 0)
                    break;
            }
            c++;
        }
        puts(parenteses ? "incorrect" : "correct");
    }
    return 0;
}