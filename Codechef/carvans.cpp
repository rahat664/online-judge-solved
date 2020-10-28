#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int t, n, max_speed, car_speed,ans = 0;
    cin >>  t;
    while(t--)
    {
        cin >> n;
        max_speed = INT_MAX;
        while(n--)
        {
            cin >> car_speed;
            if(max_speed >= car_speed)
            {
                ans++;
                max_speed = car_speed;
            }

        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}
