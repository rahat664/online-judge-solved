#include<stdio.h>

int main()

{
    int milage=12;

    double fuel, time,speed;

    scanf("%lf %lf",&time,&speed);

    fuel = (time*speed)/milage;

    printf("%.3lf\n",fuel);

    return 0;

}
