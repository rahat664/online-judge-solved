#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n,t;
	cin >> t;

	for(int i = 0; i<t; i++)
    {
        cin >> m >> n;

	if(m > n)
    {
        cout <<">"<<endl;
    }
    if(m < n)
    {
        cout <<"<"<<endl;
    }
    if(m == n)
    {
        cout <<"="<<endl;
    }
    }
	return 0;

}
