#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcase;
    string word;
    cin >> testcase;
    while (testcase--)
    {
        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
    return 0;
}
