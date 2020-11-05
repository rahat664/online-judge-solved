#include <iostream>

using namespace std;

int main()
{
    int testcase, Petya, Vasya, Tonya, number = 0;
    cin >> testcase;
    while (testcase--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}
