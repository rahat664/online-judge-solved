#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

    unsigned long long int t, n, res;
    cin >> t;
    while(t--)
    {
        cin >> n;
        n %= 1000000007
        ;
        res = n*n % 1000000007;
        cout << res << endl;
    }
    return 0;
}
