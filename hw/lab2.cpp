// Rahat kabir Dhrubo Batch: 53 Roll: 49
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, a[100],i, options;
    cout << "Enter how many number you want to insert: ";
    cin >> num;
    cout << "Enter the numbers: ";
    for(i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    cout << "........menu.........\n";
    cout << "press 1 for ascending order sorting\n";
    cout << "press 2 for descending order sorting\n";
    cin >> options;
    if(options == 1)
    {
        cout << "you have chosen ascending order sorting\nsorted list: ";
        for(i = 0 ; i < num; i++)
        {
            cout << a[i];
        }
    }

    if(options == 2)
    {
        cout << "you have chosen descending order sorting\nsorted list: ";
        for(i = num - 1 ; i >= 0; i--)
        {
            cout << a[i];
        }
    }

    return 0;
}
