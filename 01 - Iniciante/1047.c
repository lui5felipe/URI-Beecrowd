    #include<stdio.h>

    int main(void)
    {
        int hini,hfim,mini,mfim;
        scanf("%d %d %d %d",&hini,&mini,&hfim,&mfim);

        if(hini==hfim && mini==mfim)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else if(hfim > hini)
        {
            if(mfim > mini)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(hfim-hini),(mfim-mini));
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(hfim-hini-1),(60+mfim-mini));
            }
        }
        else
        {
            if(mfim > mini)
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24+hfim-hini),(mfim-mini));
            }
            else
            {
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(23+hfim-hini),(60+mfim-mini));
            }
        }

        return 0;
    }
