#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,count=0;

    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    if(a > 0)
    {
        count++;
    }

    if(b > 0)
    {
        count++;
    }

    if(c > 0)
    {
        count++;
    }

    if(d > 0)
    {
        count++;
    }

    if(e > 0)
    {
        count++;
    }

    if(f > 0)
    {
        count++;
    }

    printf("%d valores positivos\n",count);
}
