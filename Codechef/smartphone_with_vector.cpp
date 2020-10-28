#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b;
    vector <long long int> budget;
    cin >> n;
    for(auto i = 0; i < n; i++)
    {
        cin >> b;
        budget.push_back(b);
    }

    sort(budget.begin(), budget.end());
    long long int max_revenue = -1;
    for(auto i=0; i<n; i++)
    {
        if(budget[i]*(n-i) >= max_revenue)
            max_revenue = budget[i]*(n-i);//60
    }
    cout<<max_revenue<<endl;
    return 0;
}
