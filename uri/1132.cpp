#include <iostream>
using namespace std;
int main()
{
    int a,b,c=0,x;
    cin >> a >> b;
    if(a<b)
    {
        for(x=a; x<=b; x++)
        {
            if(x%13==0) continue;
            c+=x;
        }
    }
    else if(a>b)
    {
        for(x=b; x<=a; x++)
        {
            if(x%13==0) continue;
            c+=x;
        }
    }
    cout << c;
    return 0;
}

