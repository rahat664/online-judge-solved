#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int number,testcases,divisor,counter = 0;
    cin >> testcases >> divisor;
    while(testcases--)
    {
        cin >> number;
        if(number % divisor == 0)
        {
            counter++;
        }
    }
    cout << counter << endl;
}
