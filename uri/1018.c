#include <stdio.h>


int main()
{
    int notes, extra;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    extra = (notes%100);


    printf("%d nota(s) de R$ 50,00\n", extra/50);
    extra = (extra%50);


    printf("%d nota(s) de R$ 20,00\n", extra/20);
    extra = (extra%20);


    printf("%d nota(s) de R$ 10,00\n", extra/10);
    extra = (extra%10);


    printf("%d nota(s) de R$ 5,00\n", extra/5);
    extra = (extra%5);


    printf("%d nota(s) de R$ 2,00\n", extra/2);
    extra = (extra%2);


    printf("%d nota(s) de R$ 1,00\n", extra/1);
    return 0;

}
