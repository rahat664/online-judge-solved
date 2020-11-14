#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,r,i;
    cin >> n >> a;
    for(i=1; i<=a; i++)
    {
        r=n%10;
        if(r==0)
        {
            n/=10;
        }
        else
            n-=1;
    }
    cout << n;

    return 0;
}