#include <stdio.h>

int main()
{
    double i,j,e;

    for(i=0.0; i<=2.0; i=i+.2)
    {
        for(j=1.0; j<=3.0; j = j+1.0)
        {
            e = j+i ;

            if(i == 0.0 || i == 1.0 )
            {
                printf("I=%.0lf J=%.0lf\n",i,e);
            }
            else if(e == 3.0 || e == 4.0 || e == 5.0)
            {
                printf("I=%.0lf J=%.0lf\n",i,e);
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n",i,e);
            }
        }
    }

    return 0;
}
