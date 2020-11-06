#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l;
    string s;
    cin >> s;
    for(i=0;i<s.length();i++)
    {
        if(s[0]>=97&&s[0]<=122)
             s[0]=65+s[0]-97;
    }
    cout << s;
    return 0;
}