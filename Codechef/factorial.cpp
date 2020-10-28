#include<bits/stdc++.h>
using namespace std;
void result()
{
    long long int n,ans = 0;
    cin >> n;
    while(n != 0)
    {
        ans += n/5;
        n /= 5;
    }
    cout << ans << endl;
}
int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        result();
    }
}

