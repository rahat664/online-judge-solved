#include<stdio.h>
#include<ctype.h>
main()
{
    int c;
    scanf("%d",&c);
    if(isdigit(c))
{
        printf("ok");
    }else{
        printf("No");
    }
}
