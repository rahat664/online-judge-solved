#include<stdio.h>

int main()
{
    int n,i,j,x,y,min,max,sum;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {

        scanf("%d",&x);
        scanf("%d",&y);

        if(x>y)
        {
            max = x;
            min = y;
        }

        else
        {
            min = x;
            max = y;
        }

        sum = 0;
        for(j=min+1; j<=max-1; j++)
        {
            if(j % 2 == 1)
            {
                sum+= j;
            }

        }
        printf("%d\n",sum);


    }


}
