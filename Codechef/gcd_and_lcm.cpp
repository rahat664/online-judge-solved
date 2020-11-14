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
    	int Gcd = __gcd(num1, num2);
        cout << Gcd << ' ' << (num1*num2)/Gcd << endl;
    }
	return 0;
}