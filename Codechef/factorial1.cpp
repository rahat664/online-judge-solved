#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int testcase, number, factorial = 1;
	cin >> testcase;
	while(testcase--)
	{
		cin >> number;
		while(number > 1)
		{
			factorial *= number;
			number--;
		}
		cout << factorial << endl;
		factorial = 1;
	}
}
