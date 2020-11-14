#include <bits/stdc++.h>
using namespace std;

int main()
 {
	int test;
	cin >> test;
	float HRA, DA;
	
	while(test--)
	{
	    int salary;
	    cin >> salary;
	    if(salary<1500)
	    {
	        HRA = 0.1*salary;
	        DA = 0.9*salary;
	    }
        else
	    {
	        HRA = 500;
	        DA = 0.98*salary;
	    }
	    cout << fixed << setprecision(2) << salary+HRA+DA << endl;
	}
	return 0;
}
