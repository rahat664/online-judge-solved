#include<stdio.h>

int main()
{
    int a,b,i,sum=0;
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a<=0 || b<=0)
            break;

        else
        {
            sum = 0;
            if(a<b)
            {
                for(i=a; i<=b; i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("Sum=%d\n",sum);
            }
            else if(a>b)
            {
                for(i=b; i<=a; i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("Sum=%d\n",sum);
            }
        }

    }
    return 0;

}
