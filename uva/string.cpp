#include<bits/stdc++.h>
using namespace std;
  int main()
  {
      string s;
        getline(cin,s);

        string str;

        for(auto x:s)
        {
            if(x==' ')
            {
                cout<<str<<endl;
                 str.erase();
            }

            else
                  str=str+x;
        }

        cout<<str;
  }
