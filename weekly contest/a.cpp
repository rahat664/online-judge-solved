#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a,i;

    cin >> a;

    for(i=0; i<a; i++)
    {
        string name;

        cin >> name;

        int n = name.size();

        int half = n/2;

        string hal= name.substr(0,half);

        int j =0;
        while(j<half)

        {
            cout << hal[j];
            j = j+2;
        }

        cout << endl;

    }


return 0;
}
