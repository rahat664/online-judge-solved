#include<stdio.h>

int main()

{
    int second,extra,hours,minute;

    scanf("%d",&second);

    hours = second/3600;
    extra = second%3600;
    minute = extra/60;
    extra = extra%60;
    second = extra;

    printf("%d:%d:%d\n",hours,minute,second);

    return 0;
    }
