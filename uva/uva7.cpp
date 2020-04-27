#include<iostream>
using namespace std;

int main()
{
    int t, i, j, a, b;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        int sum = 0;
        cin >> a >> b;

        if(a < b)
        {
            for(j = a; j <= b; j++)
            {
                if(j % 2 != 0)
                {
                    sum+= j;
                }
            }
        }

        else
        {
            for(j = b; j <= a; j++)
            {
                if(j % 2 != 0)
                {
                    sum+= j;
                }

            }
        }

        cout << "Case " << i+1 << ": " << sum << endl;
    }
}
