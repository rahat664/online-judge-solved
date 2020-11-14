#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    long long int k,n,w,ans=0;
    cin >> k >> n >> w;
    for(i=0; i<=w; i++)
    {
        ans+=i*k;
    }
    ans-=n;
    if(ans<0)
    {
        ans=0;
    }
    cout << ans << endl;

    return 0;
}