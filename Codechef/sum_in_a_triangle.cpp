#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int lines;
        cin>>lines;
        int A[lines][lines];
        for(int i=0; i<lines; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cin>>A[i][j];
            }
        }
        for(int i=lines-1; i>=1; i--)
        {
            for(int j= 0; j<=i-1; j++)
            {
                A[i-1][j] = A[i-1][j] + max(A[i][j], A[i][j+1]);
            }
        }
        cout<<A[0][0]<<endl;
    }
}