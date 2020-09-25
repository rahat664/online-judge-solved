#include<stdio.h>
int main()
{
    int Test,i,a,b,c,max;
     scanf("%d",&Test);
    for(i=0;i<Test;i++)
    {
         scanf("%d%d%d",&a,&b,&c);
        if(a > b && a  > c)
        {
            max = a;
        }
        if(b > a && b  > c)
        {
            max = b;
        }
        if(c > b && c > a)
        {
            max = c;
        }
        printf("%d\n",max);
    }
}

