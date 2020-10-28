#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        string str; // rotor
        cin >> str;
        int n = str.length();  //6
        if(n % 2 == 0)
        {
            string a = "";
            string b = "";
            for(int i = 0; i < n / 2; i++) //3
            {
                a += str[i]; //abc
            }
            for(int i = n / 2; i < n; i++) //3
            {
                b += str[i];//cab
            }
            sort(a.begin(), a.end());//abc
            sort(b.begin(), b.end());//abc
            if(a == b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
        else
        {
            string a="";
            string b="";
            for(int i=0; i<(n/2); i++)
            {
                a += str[i];//ro
            }
            for(int j= (n /2)+1; j < n; j++)
            {
                b += str[j];  //or
            }
            sort(a.begin(), a.end());//or
            sort(b.begin(), b.end());//or
            if(a == b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }

    return 0;
}
