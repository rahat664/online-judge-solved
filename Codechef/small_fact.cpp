
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int num;
        cin>>num;
        vector<int> res;
        res.push_back(1);
        int carry=0;
        for(int i=2; i<=num; i++)
        {
            for(int j=0; j<res.size(); j++)
            {
                int tmp=res[j]*i;
                res[j]=(tmp+carry)%10 ;
                carry=(tmp+carry)/10;

            }
            while(carry!=0)
            {
                res.push_back(carry%10);
                carry=carry/10;
            }

        }

        for(int i=res.size()-1; i>=0; i--)
        {
            cout<<res[i];
        }
        cout<<endl;
    }
    return 0;
}
