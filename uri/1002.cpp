#include<iostream>
#include<limits>
#define n 3.14159
using namespace std;
typedef std::numeric_limits< double > dbl;
int main()
{
    double r;
    cin >> r;

    cout.precision(dbl::max_digits3);
    cout << "A="  << n.r*r << endl
    return 0;
}

