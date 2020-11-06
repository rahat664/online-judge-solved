#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a=0,i=0,rev=0,cp=0;
    cin >> i;
    while(i--)
    {
        rev=0;
        cin >> a;
        cp=a;
        while(cp!=0)
        {
            rev=rev*10+(cp%10);
            cp=cp/10;
        }
        if(a==rev)
            cout << "wins" << endl;
        else
            cout << "losses" << endl;
    }
	return 0;
}
