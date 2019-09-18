#include<stdio.h>
int main()
{
    int a,b,c,d,e,count=0;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a % 2 == 0)
    {
        count++;
    }

    if(b % 2 == 0)
    {
        count++;
    }

    if(c % 2 == 0)
    {
        count++;
    }

    if(d % 2 == 0)
    {
        count++;
    }

    if(e % 2 == 0)
    {
        count++;
    }

    printf("%d valores pares\n",count);

    return 0;
}
