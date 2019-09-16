#include<stdio.h>
int main()
{
    int codes,amount;

    double price = 0.00;

    scanf("%d %d", &codes, &amount);

    if (codes == 1)
    {
     price = 4.00 * amount;
    }

     else if (codes == 2)
    {
     price = 4.50 * amount;
    }

    else if (codes == 3)
    {
     price = 5.00 * amount;
    }

    else if (codes == 4)
    {
     price = 2.00 * amount;
    }

    else if (codes == 5)
    {
     price = 1.50 * amount;
    }

    printf("Total: R$ %.2lf\n", price);

    return 0;
}
