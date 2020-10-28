#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long k, d0, d1, flag = 0;
        cin >> k >> d0 >> d1;
        long long sum = (d0 + d1) % 3,temp = (d0 + d1) % 10;
        if(temp == 0 || k == 2)
        {
            flag=1;
        }

        else
        {
            sum += (temp % 3);
        }

        temp = (2 * temp) % 10;

        if(temp == 0)
        {
            flag = 1;
        }


        if(flag == 0)
        {
            for(auto i = 4; i <= k; i++)
            {
                if((k - i + 1) % 4 == 0)
                {
                    sum += (((k - i + 1) / 2) % 3);
                    break;
                }
                else
                {
                    sum += (temp % 3);
                    temp = (2 * temp) % 10;
                }
            }
        }
        if(sum % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO"  << endl;
    }
    return 0;
}
