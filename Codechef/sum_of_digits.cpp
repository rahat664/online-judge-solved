#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num,fact = 1;
    cin >> t;
    while(t--)
    {
        cin >> num;
        for(int i = 1; i <=num; i++)
        {
           fact *= i;

        }
        cout << fact << endl;
        fact = 1;


    }
}
