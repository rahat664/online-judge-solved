#include<iostream>
using namespace std;

int main()
{
    long long int n, a, b, i;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> a >> b;

        if(a > b)
        {
            cout << ">" << endl;
        }

        else if(a < b)
        {
            cout << "<" << endl;
        }

        else if(a == b)
        {
            cout << "=" << endl;
        }
    }
}
