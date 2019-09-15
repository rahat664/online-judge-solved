#include<stdio.h>
int main()
{
    int code1,ammount1,code2,ammount2;
    double price1,price2,price;
    scanf("%d %d %lf\n",&code1,&ammount1,&price1);
    scanf("%d %d %lf",&code2,&ammount2,&price2);
    price=(price1*ammount1)+(price2*ammount2);
    printf("VALOR A PAGAR: R$ %.2lf\n",price);

}
