#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	long long int i,j,k,m,l,n;
	while (t--)
	{
		cin>>n;
		long long int sum=0;
		for(j=11; j>=0; j--)
		{
			m=pow(2,j);
			while(n>=m)
			{
				n = n - m;
				
				sum++;
			}
		}
		cout << sum << endl;
	}
    return 0;
}