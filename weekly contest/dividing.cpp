# include <stdio.h>

int main()
{
    int i, j, m, n, p, t, sum, Y, tmp, a[6];

    Y = 1;
    while(scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]) == 6&&(a[0]||a[1]||a[2]||a[3]||a[4]||a[5]))
    {
        printf("Collection #%d:\n",Y++);

        if((a[0]+a[1]*2+a[2]*3+a[3]*4+a[4]*5+a[5]*6)%2)
        {
            printf("Can't be divided.\n\n");
            continue;
        }
        if(a[5] > 5) if(a[5]%2) a[5] = 5;
            else a[5] = 4;
        if(a[4] > 6) if(a[4]%2) a[4] = 5;
            else a[4] = 6;
        if(a[3] > 5) if(a[3]%2) a[3] = 5;
            else a[3] = 4;
        if(a[2] > 5) if(a[2]%2) a[2] = 5;
            else a[2] = 4;
        if(a[1] > 4) if(a[1]%2) a[1] = 3;
            else a[1] = 4;
        sum =  a[1]*2 + a[2]*3 + a[3]*4 + a[4]*5 + a[5]*6;
        for(i = 0; i <= a[1]; i++)
            for(j = 0; j <= a[2]; j++)
                for(m = 0; m <= a[3]; m++)
                    for(n = 0; n <= a[4]; n++)
                        for(p = 0; p <= a[5]; p++)
                        {
                            tmp = 2*i+3*j+4*m+5*n+6*p;
                            t = tmp*2>sum?tmp*2-sum:sum-tmp*2;
                            if(a[0]+t>=0&&(a[0]+t)%2==0&&a[0]+t<=2*a[0])
                            {
                                printf("Can be divided.\n\n");
                                goto k;
                            }
                        }
        printf("Can't be divided.\n\n");
k:
        ;
    }
}
