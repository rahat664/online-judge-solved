#include <iostream>

using namespace std;

int main()
{
    long long t, p1, p2;
    double g1, g2;
    int anos, sec;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> p1 >> p2 >> g1 >> g2;

        anos = 0;
        sec = 0;

        while(p1 <= p2)
        {
            p1 += p1*g1/100;
            p2 += p2*g2/100;

            anos++;
            if(anos > 100)
            {
                sec = 1;
                break;
            }
        }
        if(sec == 0)
            cout << anos << " anos." << endl;
        else
            cout << "Mais de 1 seculo." << endl;
    }
    return 0;
}
