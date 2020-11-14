#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int test;
	cin >> test;
	while (test--)
    {
	    long long num1, num2;
    	cin >> num1 >> num2;
    	int gcd = __gcd(num1, num2);
        int lcm = num1*num2/gcd;
        cout << gcd << ' ' << lcm << endl;
    }
	return 0;
}