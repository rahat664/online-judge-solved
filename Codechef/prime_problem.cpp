#include<bits/stdc++.h>
using namespace std;

int prime(long num)
{

    for (int i = 2; i <=sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    long num = 2;
    while (n > 0)
    {
        if (prime(num))
        {
            cout << num << endl;
            n--;
        }
        num++;
    }

}
