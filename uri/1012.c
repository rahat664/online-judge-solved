#include<stdio.h>
#define PI 3.141589
int main()
{
    double a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf %lf %lf",&a,&b,&c);
    TRIANGULO = .5 * a * c;
    CIRCULO = PI * c * c;
    TRAPEZIO = .5 * (a+b) * c;
    QUADRADO = b * b;
    RETANGULO = a * b;
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);
    return 0;
}
