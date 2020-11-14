#include<bits/stdc++.h>
using namespace std;
int main()
{
    double test,quantity,price;
    cin>>test;
    while(test--)
    {
        double ans = 1;
        cin >> quantity >> price;
        if(quantity > 1000){
            quantity = quantity -(quantity * 0.1);
            ans = quantity * price;
        }
        else
        {
            ans=quantity*price;
        }
        printf("%0.6lf\n",ans);


    }
return 0;
}