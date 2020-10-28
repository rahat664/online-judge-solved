#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int num, ans = 0;
        cin >> num;
        while(num !=0)
        {
            long long int rem = num%10;
            if(rem == 4)
            {
                ans++;
            }
            num /= 10;
        }
        cout << ans << endl;

    }


}
