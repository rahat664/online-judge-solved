#include<iostream>
using namespace std;

int main()
{
    int v, a, d; // v = velocity , a = acceleration ,d = displacement

    while(cin >> v >> a)
    {
        d = 2 * v * a;// in the problem said that what will the displacement twice of that time

        cout << d << endl;
    }

    return 0;
}
