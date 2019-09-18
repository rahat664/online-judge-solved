#include<stdio.h>

int main()
{
    double a,b,c,d,e,f,sum=0,average;

    int count=0;

    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);

    if(a > 0)
    {
        count++;
        sum+=a;
    }

    if(b > 0)
    {
        count++;
        sum+=b;
    }

    if(c > 0)
    {
        count++;
        sum+=c;
    }

    if(d > 0)
    {
        count++;
        sum+=d;
    }

    if(e > 0)
    {
        count++;
        sum+=e;
    }

    if(f > 0)
    {
        count++;
        sum+=f;
    }

    average = sum / count;

    printf("%d valores positivos\n%.1lf\n",count,average);

    return 0;

}

