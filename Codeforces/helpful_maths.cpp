#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,i,j;
    char s[100];
    cin >> s;
    l=strlen(s);
    for(i=0;i<l;i+=2)
    {
        for(j=0;j<l-i-2;j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
            }
        }
    }
    cout << s;
    return 0;
}