
#include <stdio.h>

int main()

{

    int strtTm, endTm, durationTm,strtmin,endmin,durationmin;

    scanf("%d %d %d %d", &strtTm,&strtmin,&endTm, &endmin);

    durationTm = endTm - strtTm;
    durationmin = endmin - strtmin;

    if (durationTm < 0)

    {

        durationTm = 24 + (endTm - strtTm);

    }

    if (durationmin < 0)
    {
        durationTm = durationTm - 1;
        durationmin = 60 + (endmin -strtmin);
    }

    if (strtTm == endTm && endmin == strtmin)

    {

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }

    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationTm, durationmin);



    return 0;

}
