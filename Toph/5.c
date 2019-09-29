#include<stdio.h>

int main()
{
    long int a,b,c,d,e,mis;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    e = b + c + d;

    mis = a - e;

    printf("%d",mis);

    return 0;
}
