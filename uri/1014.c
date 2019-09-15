#include<stdio.h>

int main()
{
    int distance;

    double fuel,milage;

    scanf("%d %lf",&distance,&fuel);

    milage = distance/fuel;

    printf("%.3lf km/l\n",milage);

    return 0;

}
