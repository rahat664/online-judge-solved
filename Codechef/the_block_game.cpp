#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int rev=0;
        int temp = n;
        while(n > 0)
        {
            int dig = n % 10;
            rev = rev*10 + dig;
            n /= 10;
        }
        if(temp == rev)
        {
            cout<<"wins"<<endl;
        }
        else
        {
            cout<<"loses"<<endl;
        }
    }
	return 0;
}