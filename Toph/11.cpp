#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{
    char str[100];

    int i,len;

    int flag = 0;

    cin >> str;
    len = strlen(str);

    for(i=0;i<len;i++)
    {
        if (toupper(str[i])!=toupper(str[len -i -1]))
        {
            flag = 1;
            break;
        }

    }

    if(flag)
    {
        cout << "No" << endl;

    }

    else
    {
        cout << "Yes" << endl;
    }

    return 0;


}
