#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num, ans = 0;
        cin >> num;
        int digit[100];
         int i = 0;
        while(num !=0)
        {
            int rem = num%10;
            digit[i] = rem;
            num /= 10;
            i++;
        }
        ans = digit[0] + digit[i - 1] ;
        cout << ans << endl;

    }
}
