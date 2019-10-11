#include <iostream>

using namespace std;

int main()
{
    int n, num;
    int perf;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        perf = 0;

        for(int i = 1; i < num; i++)
        {
            if(num%i == 0)
            {
                perf += i;
                if(perf > num)
                    break;
            }
        }
        if(perf == num)
            cout << num << " eh perfeito\n";
        else
            cout << num << " nao eh perfeito\n";

    }
    return 0;
}
