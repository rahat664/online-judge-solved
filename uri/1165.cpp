#include <iostream>

using namespace std;
int main()
{
    int x, i, j, n,c;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cin >> x;
        c=0;
        for(j=1; j<=x; j++)
        {
            if(x%j==0)
                c++;
        }
        if(c==2)
        {
            cout << x << " eh primo" << endl;
        }
        else
        {
            cout << x << " nao eh primo" << endl;
        }
    }
    return 0;
}
