#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                sum += i;
                sum += (n / i);
            }
        }
        sum+=1;
        if (sum == n && n!=1)
        {
            cout << "YES" << endl;
        }
        else
        {
           cout << "NO" << endl;
        }
    }


}
