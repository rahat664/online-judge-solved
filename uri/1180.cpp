#include <iostream>

using namespace std;

int main()
{
    int n, aux, pos;

    cin >> n;

    int N[n];

    aux = 1000;
    pos = 0;

    for(int i = 0; i < n; i++)
        {
            cin >> N[i];
            if(N[i] < aux)
            {
                     aux = N[i];
                     pos = i;
            }
    }

    cout << "Menor valor: " << aux << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}
