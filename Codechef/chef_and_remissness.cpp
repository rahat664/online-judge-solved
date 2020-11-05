#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int test,i,a,b,min,max;
	cin>>test;
	while(test--)
	{
	    cin>>a>>b;
	    if(a>b)
        {
            min=a;
        }
	        
	    else
        {
            min=b;
        }
	        
	    max=a+b;
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}