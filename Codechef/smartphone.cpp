#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n; //4
    long long int budget[n];
    for(auto i = 0; i < n; i++)
    {
        cin >> budget[i]; // 20 30 53 14
    }

        sort(budget,budget+n); // 14 20 30 53
    long long int max_revenue = -1;
    for(auto i=0;i<n;i++){
                      if(budget[i]*(n-i) >= max_revenue)
            max_revenue = budget[i]*(n-i);//60
    }
    cout<<max_revenue<<endl; //60
	return 0;
}
