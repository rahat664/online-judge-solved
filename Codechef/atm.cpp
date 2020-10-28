#include<bits/stdc++.h>
using namespace std;
int main()         x
{
       double bank_balance,current_balance;
       int withdrawal_amount;
       cin >> withdrawal_amount >> bank_balance;
       if(withdrawal_amount <= (bank_balance-.5) && withdrawal_amount%5 == 0)
       {
           current_balance = bank_balance - (withdrawal_amount+.50);
           printf("%.2lf\n",current_balance);
       }
       else
       {
           printf("%.2lf\n",bank_balance);
       }
}
