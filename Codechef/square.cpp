#include<stdio.h>
int main()
{
    int Test,num,i;
    scanf("%d",&Test);
    for(i = 0; i < Test; i++)
    {
        scanf("%d",&num);
        printf("%d\n",num*num);
    }
}
