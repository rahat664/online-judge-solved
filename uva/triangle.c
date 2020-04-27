#include <bits/stdc++.h>

using namespace std;
int arr[205][105];
int dp[205][105];
int n;
int solve(int i,int j)
{

    if(i>=0&&i<2*n-1&&j>=0&&j<n)
    {
        if(dp[i][j]!=-1)return dp[i][j];
        int one=0,two=0,three=0;
        if(j==0&&i>=n-1)
        {
            one=arr[i][j]+solve(i+1,j);
        }

        else if(i>=n-1&&arr[i+1][j]==0)
        {
            one=arr[i][j]+solve(i+1,j-1);
        }
        else if(i<n-1)
        {
            one=arr[i][j]+solve(i+1,j);
            two=arr[i][j]+solve(i+1,j+1);
        }
        else if(i>=n-1)
        {
            one=arr[i][j]+solve(i+1,j);
            two=arr[i][j]+solve(i+1,j-1);
        }
        int mx=max(one,two);
        dp[i][j]=mx;
        return dp[i][j];

    }
    else return 0;

}
int main()
{
    int t,l=1;
    scanf("%d",&t);
    while(t--)
    {
        memset(&dp,-1,sizeof(dp));
        memset(&arr,0,sizeof(arr));
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0; i<(n-1); i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                cin>>arr[i+n][j];
            }
        }
        int ans=solve(0,0);
        printf("Case %d: %d\n",l++,ans);

    }
    return 0;
}
