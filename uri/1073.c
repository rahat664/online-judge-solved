#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i = 2; i <= n ; i = i + 2)
    {
        if(i % 2 == 0)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
    }

    return 0;
}
