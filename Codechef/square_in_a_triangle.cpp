#include <bits/stdc++.h>
using namespace std;

int main()
 {
	int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a = (n-2)/2;
        cout<< a * (a+1)/2<<endl;
    }

	return 0;
}