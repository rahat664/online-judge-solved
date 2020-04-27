#include<iostream>
using namespace std;

int main()
{
    long  int n;
    int t;
    cin >> t ;

    for(int i  = 0; i < t ; i++)
    {
        int result = 0;
        cin >> n;

        int b = n % 100;
        int num = n /100;

        if(b<50){
            result = num*2;
        } else{
            result = (num*2)+1;
        }
           cout << result << endl;
    }
    return 0;
}
