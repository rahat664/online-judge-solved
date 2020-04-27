#include<iostream>
using namespace std;

int main()
{
    int t, i, a, b, c, max, min;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> a >> b >> c;

        if((a > b && a < c) || (a > c && a < b))
        {
            cout << "Case " << i+1 << ": " << a << endl;
        }

        else if((b > a && b < c) || (b > c && b < a))
        {
            cout << "Case " << i+1 << ": " << b << endl;
        }

        else
        {
            cout << "Case " << i+1 << ": " << c << endl;
        }
    }

    return 0;
}
