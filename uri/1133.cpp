#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b;
    if(a<b)
    {
        for(c=a+1; c<b; c++)
        {
            if(c%5==2 || c%5==3)
                cout << c <<endl;
        }
    }
    else if(a>b)
    {
        for(c=b+1; c<a; c++)
        {
            if(c%5==2 || c%5==3)
                cout << c << endl;
        }
    }
    return 0;
}

