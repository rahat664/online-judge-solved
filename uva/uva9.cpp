#include<bits/stdc++.h>
using namespace std;
long Reverse(long x)
{
	long newX(0);

	while (x)
	{
		newX *= 10;
		newX += x % 10;
		x /= 10;
	}

	return newX;
}
int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		long num;
		cin >> num;

		long revNum = Reverse(num);

		int count(0);
		while (revNum != num)
		{
			num += revNum;
			revNum = Reverse(num);
			++count;
		}
		cout << count << " " << num << endl;
	}
}

