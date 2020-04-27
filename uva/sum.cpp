#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool standardizeNumNoDot(string &s)
{
    while (!s.empty() && '0' == s[0])
        s.erase(s.begin());
    if (s.empty ())
        s = "0";
    bool notDot = true;
    for (unsigned i = 0; i < s.size() && notDot; i++)
    {
        if ('.' == s[i])
            notDot = false;
    }
    if (notDot)
        return true;

    while (!s.empty() && '0' == s[s.size()-1])
        s.erase(s.end()-1);
    if (!s.empty() && '.' == s[s.size()-1])
        s.erase(s.end()-1);
    if ( s.empty() )
        s = "0";
    return false;
}

int handleDecimalPoint(string &s)
{
    if (standardizeNumNoDot(s))
        return 0;
    int fraction = 0;
    int j = 0;
    for (unsigned i = 0; i < s.size() ; i++)
    {
        if (fraction > 0)
            fraction++;
        if (s[i] != '.')
            s[j++] = s[i];
        else
            fraction++;
    }
    s.erase(s.end()-1);
    return fraction - 1;
}

string mulStr(string a, string b)
{
    if ("0" == a || "0" == b)
        return "0";
    int ap = handleDecimalPoint(a);
    int bp = handleDecimalPoint(b);

    string ans(a.size()+b.size(), '0');
    for (int i = a.size() - 1; i >= 0 ; i--)
    {
        int carry = 0;
        int an = a[i] - '0';
        for (int j = b.size() - 1; j >= 0 ; j--)
        {
            int bn = b[j] - '0';
            int sum = an * bn + carry + ans[i+j+1] - '0';
            carry = sum / 10;
            ans[i+j+1] = sum % 10 + '0';
        }
        if (carry) ans[i] += carry;
    }
    if (ap > 0 || bp > 0) ans.insert(ans.end() - ap - bp, '.');
    standardizeNumNoDot(ans);
    return ans;
}

string sPow(string s, int n)
{
    if (s.empty () || "0" == s)
        return "0";
    if (0 == n)
        return "1";
    if (1 == n)
        return s;

    string divideStr = sPow(s, n/2);
    divideStr = mulStr(divideStr, divideStr);
    if (n % 2)
        divideStr = mulStr(divideStr, s);
    return divideStr;
}

void Exponentiation()
{
    string s;
    int n;
    while(cin>>s>>n)
    {
        standardizeNumNoDot (s);
        cout<<sPow(s, n)<<endl;
    }
}

int main()
{
    Exponentiation();
    return 0;
}
