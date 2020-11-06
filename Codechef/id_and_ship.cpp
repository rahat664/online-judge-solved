#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    char letter;
    cin>>test;
    for (int in = 0; in < test; in++)
    {
        cin>>letter;
        if (letter=='B' || letter=='b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if (letter=='C' || letter=='c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if (letter=='D' || letter=='d')
        {
            cout<<"Destroyer"<<endl;
        }
        else if (letter=='F' || letter=='f')
        {
            cout<<"Frigate"<<endl;
        }
    }
    
    return 0;
}