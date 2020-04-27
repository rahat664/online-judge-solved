#include <bits/stdc++.h>


using namespace std;

int cases, caseno, n;
int a[205][105];

int main()
{

    int cases,result;
    scanf("%d", &cases);
    while( cases-- )
    {
        scanf("%d", &n);
        for( int i = 0; i < n; i++ )
            for( int j = 0; j <= i; j++ )
                scanf("%d", &a[i][j]);
        for( int i = 0; i < n - 1; i++ )
            for( int j = 0; j < n - i - 1; j++ )
                scanf("%d", &a[i+n][j]);

        for( int i = 1; i < n; i++ )
            for( int j = 0; j <= i; j++ )
            {
                if( i == j )
                    a[i][j] += a[i-1][j-1];
                else
                    a[i][j] += max( a[i-1][j], a[i-1][j-1] );
            }


        for( int i = 0; i < n - 1; i++ )
            for( int j = 0; j < n - i - 1; j++ )
                a[i+n][j] += max( a[i-1+n][j], a[i-1+n][j+1] );

                result = a[2*n-2][0];

        printf("Case %d: %d\n", ++caseno, result);
    }


    return 0;
}
