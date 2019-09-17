#include<stdio.h>

int main()
{
    int a,b,c,min,mid,max;

    scanf("%d %d %d",&a,&b,&c);

    if(a<b && a<c)
    {
        min=a;

        if(b<c)
        {
            max=c;
            mid=b;
        }

        else
        {
            max=b;
            mid=c;
        }
    }

    else if(b<a && b<c)
    {
        min=b;

        if(a<c)
        {
            max=c;
            mid=a;
        }

        else
        {
            max=a;
            mid=c;
        }
    }

    if(c<b && c<a)
    {
        min=c;

        if(a<b)
        {
            max=b;
            mid=a;
        }

        else
        {
            max=a;
            mid=b;
        }
    }

    printf("%d\n%d\n%d\n",min,mid,max);

    printf("\n");

    printf("%d\n%d\n%d\n",a,b,c);


    return 0;
}
