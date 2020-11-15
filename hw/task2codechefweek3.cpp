#include <bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int num1,num2;
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: " ;
        cin >> num2;
        swap(&num1,&num2);
        cout << "values after swapping:" << endl;
        cout << "num1: " << num1 << endl << "num2: " << num2 << endl;
    }

        return 0;
}