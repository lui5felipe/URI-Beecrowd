#include <cstdio>


int main()
{
    int alumni, dinners, compareceu, i, j;
    int a[101], *ptr;
    while (scanf("%d %d", &alumni, &dinners) && (alumni || dinners))
    {

        for (i=0;i<alumni;i++)
        {
            scanf("%d",&compareceu);
            a[i] = compareceu;
        }

        for (j = 1; j < dinners; j++)
            for (i = 0; i < alumni; i++)
            {
                scanf("%d", &compareceu);
                a[i] &= compareceu;
            }

        a[alumni] = -1;
        ptr = a;

        bool contem = false;

        while (*ptr != -1)
        {
            if (*ptr)
            {
                contem = true; break;
            }
            ptr++;
        }
        if(contem)
            printf("yes\n");
        else
            printf("no\n");
        }
return 0;
}
