#include<stdio.h>
int main()
{
    int member,whour;
    double ammount;
    scanf("%d %d %lf",&member,&whour,&ammount);
    printf("NUMBER = %d\n",member);
    printf("SALARY = U$ %0.2lf\n",whour*ammount);
    return 0;
}
