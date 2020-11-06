#include<bits/stdc++.h>
using namespace std;
int prime (int x)
{
        int i,c;
        for (i = 2 ; i < x ; i++)
        {
                if( (x%i)==0)
                {
                    return 0;
                    break;
                }
                else
                    continue;
         
        }
if (x==1)   
    return 0;
else 
    return 1;
}



int main ()
{
        int t;
        cin >> t;
        while (t--)
        {
                long long int num, i;
               cin >> num;

                        if (prime(num)!=0)
                                cout << "yes" << endl;
                        else
                                cout << "no" << endl;

        }
        return 0;
}