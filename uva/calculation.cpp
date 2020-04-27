#include<iostream>
using namespace std;

int main()
{
    int p , i;

    cin >> p;

    for(i = 1; i <= p ; i++)
    {
        cout << ((107*i)%100) << endl;
        cout << i % 100 << endl;
    }
}
