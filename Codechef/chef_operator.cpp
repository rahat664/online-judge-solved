#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,num1,num2;
    cin >> test;
    while(test--)
    {
        cin >> num1 >> num2;
        if(num1 < num2)
        {
            cout << "<" << endl;
        }
        else if(num1 > num2)
        {
            cout << ">" << endl;
        }
        else if(num1 == num2)
        {
            cout << "=" << endl;
        }
    }
    return 0;
}