#include<stdio.h>
#include <math.h>

int main()
{
    int r;
    double volume, a;
    double PI = 3.14159;

    a = 4/3.0;

    scanf("%d", &r);

    volume = a * (PI * pow(r, 3));
    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}
