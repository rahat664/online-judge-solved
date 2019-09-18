#include<stdio.h>
int main()
{
    int a,b,c,d,e,count=0,count1=0,count2=0,count3=0;

    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    if(a % 2 == 0)
    {
        count++;
    }
    else
    {
        count1++;
    }

    if(b % 2 == 0)
    {
        count++;
    }
    else
    {
        count1++;
    }

    if(c % 2 == 0)
    {
        count++;
    }

    else
    {
        count1++;
    }

    if(d % 2 == 0)
    {
        count++;
    }

    else
    {
        count1++;
    }

    if(e % 2 == 0)
    {
        count++;
    }

    else
    {
        count1++;
    }

    if(a > 0)
    {
        count2++;
    }

    if(b > 0)
    {
        count2++;
    }

    if(c > 0)
    {
        count2++;
    }

    if(d > 0)
    {
        count2++;
    }

    if(e > 0)
    {
        count2++;
    }

    if(a < 0)
    {
        count3++;
    }

    if(b < 0)
    {
        count3++;
    }

    if(c < 0)
    {
        count3++;
    }

    if(d < 0)
    {
        count3++;
    }

    if(e < 0)
    {
        count3++;
    }


    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count,count1,count2,count3);

    return 0;
}

