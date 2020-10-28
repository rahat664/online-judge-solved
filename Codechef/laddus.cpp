#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;  // 2
    while(t--)
    {
        int active, minimum;
        string nation;
        cin >> active;// 4
        cin >> nation;  //INDIAN
        if (nation == "INDIAN")
        {
            minimum = 200;
        }
        else
        {
            minimum = 400;
        }
        int total = 0;
        for(int j = 0; j < active; j++)
        {
            string ch;
            cin >> ch;   //CONTEST_WON
            if(ch == "CONTEST_WON")
            {
                int ranks;
                cin >> ranks; //1
                if(ranks <= 20)
                {
                    total += (300+20) - ranks; //319
                }
                else
            {
                total += 300;
            }

            }
            else if(ch == "TOP_CONTRIBUTOR")
            {
                   total += 300;   //619
            }
            else if(ch == "BUG_FOUND")
            {
                int sev;
                cin >> sev;
                total += sev; //719
            }
            else if(ch == "CONTEST_HOSTED")
            {
                total += 50;   //769
            }


        }
        cout << total/minimum << endl;//719/400= 1
    }
    return 0;
}
