#include<stdio.h>
int main()
{
    int Test,num,i,j,binary[10];
    scanf("%d",&Test);
    for(i = 0; i < Test; i++)
    {
        scanf("%d",&num);
        for(j = 0; num > 0 ; j++)
        {
            binary[j] = num % 2;
            num = num/2;
        }
        for(j = j-1;j >=0; j--)
        {
            printf("%d",binary[j]);
        }
        printf("\n");
    }

}
