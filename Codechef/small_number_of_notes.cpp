#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int test,n;
	cin >> test;
	while(test--)
	{
	    cin>>n;
	   int hundred=n / 100;
	   int fifty=(n % 100) / 50;
	   int ten=((n % 100) % 50) / 10;
	   int five=(((n % 100) % 50) % 10) / 5;
	   int two=((((n % 100) % 50) % 10) % 5) / 2;
	   int one=(((((n % 100) % 50) % 10) % 5) % 2) / 1;
       int sum = one + two + five + ten + fifty + hundred;
	    cout << sum << endl;
	    
	}
	return 0;
}
