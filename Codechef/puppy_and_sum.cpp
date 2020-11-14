#include <iostream>
using namespace std;

int main() 
{
	int Test;
	cin>>Test;
	while(Test--)
    {
	    int D,N,sum=0;
	    cin>>D>>N;
	    while(D--){
	        sum=(N*(N+1))/2;
	        N=sum;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}