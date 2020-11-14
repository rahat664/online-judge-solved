#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int indian=0,flag=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='I')
        {
           indian=1;
        }
        if(s[i]=='Y')
        {
            flag=1;
        }
        
    }
    if((indian==1 && flag==1))
        cout<<"NOT SURE\n";
    else if(indian==0 && flag==0)
        cout<<"NOT SURE\n";
    else if(indian)
        cout<<"INDIAN\n";
    else 
        cout<<"NOT INDIAN\n";
}
int main() 
{
	int test;
	cin>>test;
	while(test--)
	{
	    solve();
	}
	return 0;
}
