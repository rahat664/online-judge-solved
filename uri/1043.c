#include<stdio.h>

int main()
{
    float a,b,c,p,ar;

    scanf("%f%f%f", &a, &b, &c);

    p=a + b + c;

    ar=.5 * (a+b) * c;


    if(a < (b+c) && b < (a+c)  && c < (a+b))
    {
        printf("Perimetro = %.1f\n",p);
    }

    else
    {
        printf("Area = %.1f\n",ar);
    }

    return 0;
}
