#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
	int test;
	cin >> test;
	while(test--)
    {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
        {
	        cin>>arr[i];
	    }
	    int Gcd= __gcd(arr[0],arr[1]);
	    for(int i=2;i<n;i++){
	        Gcd= __gcd(Gcd,arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        cout<<arr[i]/Gcd<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
