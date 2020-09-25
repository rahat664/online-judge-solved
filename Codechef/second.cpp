#include<stdio.h>
int main()
{
    int Test,i,a,b,c,mid;
    scanf("%d",&Test);
    for(i=0;i<Test;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a > b && a  < c)||(a < b && a > c))
        {
            mid = a;
        }
        if((b > a && b  < c)||(b < a && b > c))
        {
            mid = b;
        }
        if((c > b && c  < a)||(c < b && c > a))
        {
            mid = c;
        }
        printf("%d\n",mid);
    }
}
